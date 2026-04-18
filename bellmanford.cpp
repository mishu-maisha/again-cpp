#include<iostream>
#include<vector>
#include<list>
#include<climits>
using namespace std;

class Graph{
    int v;
    list<pair<int,int>> *l;

    public:
    Graph(int v){
        this->v = v;
        l = new list<pair<int,int>>[v];
    }

    void addEdge(int u, int v, int w){
        l[u].push_back({v, w});
        l[v].push_back({u, w});
    }

    // ✅ Directed edge — one way only
    void addDirectedEdge(int u, int v, int w){
        l[u].push_back({v, w});
    }

    void bellmanFord(int src){
        vector<int> dist(v, INT_MAX);
        dist[src] = 0;

        for(int i = 0; i < v-1; i++){
            for(int u = 0; u < v; u++){
                if(dist[u] == INT_MAX) continue;
                for(pair<int,int> e : l[u]){
                    int neighborNode = e.first;
                    int edgeWeight   = e.second;
                    if(dist[neighborNode] > dist[u] + edgeWeight){
                        dist[neighborNode] = dist[u] + edgeWeight;
                    }
                }
            }
        }

        for(int u = 0; u < v; u++){
            if(dist[u] == INT_MAX) continue;
            for(pair<int,int> e : l[u]){
                if(dist[e.first] > dist[u] + e.second){
                    cout << "Negative cycle detected!" << endl;
                    return;
                }
            }
        }

        cout << "Node\tDistance from src(" << src << ")" << endl;
        for(int i = 0; i < v; i++){
            cout << i << "\t" << dist[i] << endl;
        }
    }
};

int main(){
    Graph g(5);
    g.addDirectedEdge(0, 1, 4);    // 0 → 1
    g.addDirectedEdge(0, 2, 1);    // 0 → 2
    g.addDirectedEdge(2, 3, 2);    // 2 → 3
    g.addDirectedEdge(1, 3, -10);  // 1 → 3  (negative, one way only ✅)
    g.addDirectedEdge(3, 4, 3);    // 3 → 4

    g.bellmanFord(0);

    return 0;
}