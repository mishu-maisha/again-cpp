#include<iostream>
#include<vector>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int v;
    list<int> *l;

    public:
    Graph(int vertices){
       v=vertices;
       l=new list<int>[v];
    }

     void addEdge(int src, int neigh){
        l[src].push_back(neigh);
        l[neigh].push_back(src);
    }

    void bfs(){
        queue<int> q;

        vector<bool> visited(v,false);
        q.push(0);
        visited[0]=true;

        while(q.size()>0){
            int src=q.front();
            q.pop();

            cout<<src<<" ";

            for(int neigh: l[src] ){//immediate neighbour 
               if(!visited[neigh]){
                visited[neigh]=true;
                q.push(neigh);
               }
            }
        }
        cout<<endl;
    }

};

int main(){
    Graph g(5);

    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(2,3);
    g.addEdge(2,4);

    g.bfs();
    return 0;
}