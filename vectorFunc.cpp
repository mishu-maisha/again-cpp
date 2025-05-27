#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> v={1,2,3,4,5};
    //vector <int>:: iterator it; for normal iteration
    vector <int>:: reverse_iterator it;// for reverse iteration
    //v.clear();
    for( it=v.rbegin(); it!=v.rend(); it++){
        cout<< *(it)<<" ";
    }
    cout<<endl;
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
}