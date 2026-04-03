#include<iostream>
#include<queue>
#include<vector>
#include<list>

using namespace std;
class Graph {
    int v;
    list<int> *l;

    public: 
    Graph(int v){
        this->v=v;
        l=new list<int>[v];
    }

    void addEdge(int src, int neigh){
        l[src].push_back(neigh);
        l[neigh].push_back(src);
    }

    void bfs(){
        queue<int> q;
        vector<bool> visited(v,false);

         q.push(1);
         visited[1]=true;

         while(q.size()>0){
           int src=q.front();
           q.pop();

           cout<<src<<" ";

           for(int neigh:l[src]){

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
    Graph g(11);// always pass highest node+1; here 10+1=11 bcz nodes are used as index in adjacency list
    g.addEdge(1,4);
     g.addEdge(1,5);
      g.addEdge(1,2);
       g.addEdge(2,10);
        g.addEdge(2,7);
         g.addEdge(7,9);

         g.bfs();

}