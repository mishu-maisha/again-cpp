#include<iostream>
#include<list>
using namespace std;

class Graph{
    int v;
    list<int> *l;//syntax for dynamic arr, stores adj lists for array syntax: int *arr but as it is list it would be: list<int> *l

    public:
    //constructor
    Graph(int v){
        this->v=v;
        l=new list<int>[v];// just like arr=new int[v];
    }

    void addedge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void printAdjlist(){
     for(int i=0; i<v; i++){
        cout<<i<<" : ";
        for(int neigh:l[i] ){
         cout<<neigh<<" ";   
        }
        cout<<endl; 
     }
     }
};
int main(){
    Graph g(5);

    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,3);
    g.addedge(2,4);

    g.printAdjlist();
    return 0;
}