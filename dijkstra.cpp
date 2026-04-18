#include<iostream>
#include<vector>
#include<list>
#include<queue>
#include<climits>
using namespace std;

class Graph{
    int v;
    list<pair<int,int>> *l;   // {neighbor, weight} — same as Prim's

    public:
    Graph(int v){
        this->v = v;
        l = new list<pair<int,int>>[v];
    }

    void addEdge(int u, int v, int w){
        l[u].push_back({v, w});
        l[v].push_back({u, w});
    }

    void dijkstra(int src){
        // Step 1: all distances = infinity
        vector<int> dist(v, INT_MAX);
        dist[src] = 0;

        // Step 2: minheap → {dist, node}
        priority_queue<pair<int,int>,
                       vector<pair<int,int>>,
                       greater<pair<int,int>>> pq;

        pq.push({0, src});

        // Step 3: process
        while(pq.size() > 0){
            int u = pq.top().second;
            pq.pop();

            // Edge relaxation
            for(pair<int,int> e : l[u]){
                int neighborNode   = e.first;
                int edgeWeight     = e.second;

                if(dist[neighborNode] > dist[u] + edgeWeight){
                    dist[neighborNode] = dist[u] + edgeWeight;
                    pq.push({dist[neighborNode], neighborNode});
                }
            }
        }

        // Print result
        cout << "Node\tDistance from src(" << src << ")" << endl;
        for(int i = 0; i < v; i++){
            cout << i << "\t" << dist[i] << endl;
        }
    }
};

int main(){
    Graph g(6);
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 5, 1);
    g.addEdge(4, 3, 2);
    g.addEdge(4, 5, 5);

    g.dijkstra(0);

    return 0;
}