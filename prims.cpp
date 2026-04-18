#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;
class Graph{
    int v;
    list<pair<int,int>> *l;

    public:
    Graph(int v){
        this->v=v;
        l=new list<pair<int,int>>[v];
    }

    void addEdge(int u, int v,int w){
        l[u].push_back({v,w});
        l[v].push_back({u,w});
    }

    int primMST(){
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>> pq;

        vector<bool> MSTset(v,false);
        int MSTcost=0;

        pq.push({0,0});

        while(pq.size()>0){
            int wt=pq.top().first;
            int u=pq.top().second;
            pq.pop();

            if(MSTset[u]) continue;

            MSTset[u]=true;
            MSTcost+=wt;

            for(pair<int,int> neigh: l[u]){
                int v=neigh.first;
                int w=neigh.second;
                if(!MSTset[v]){
                    pq.push({w,v});
                }
            }

        }
        return MSTcost;
    }
};

int main(){
    Graph g(4);
    g.addEdge(0,1,10);
     g.addEdge(0,2,6);
      g.addEdge(0,3,5);
       g.addEdge(1,3,15);
        g.addEdge(2,3,4);

        cout<<"MST Cost = "<<g.primMST()<<endl;
    return 0;
}