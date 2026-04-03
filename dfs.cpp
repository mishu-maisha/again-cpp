#include<iostream>
#include<stack>
#include<list>
#include<vector>
using namespace std;

class Graph {
    int v;
    list<int> *l;

    public:
    Graph(int vertice){
        v=vertice;
        l=new list<int>[v];
    }

    void addEdge(int src,  int neigh){
        l[src].push_back(neigh);
        l[neigh].push_back(src);
    }

    void dfs(){
        stack<int> s;
        vector<bool> visited(v,false);

        s.push(1);
        visited[1]=true;

        while(s.size()>0){
            int src=s.top();
            s.pop();
            cout<<src<<" ";
            for(int neigh: l[src]){
                if(!visited[neigh]){
                    visited[neigh]=true;
                    s.push(neigh);
                }
            }
        }
        cout<<endl;
    }
};

int main(){
    Graph g(11);

    g.addEdge(1,4);
     g.addEdge(1,5);
      g.addEdge(1,2);
       g.addEdge(2,10);
        g.addEdge(2,7);
         g.addEdge(7,9);

         g.dfs();

  return 0;
}
