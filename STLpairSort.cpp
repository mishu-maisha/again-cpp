#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <pair<int, int>> v={
        {100,50},
        {1000,0},
        {60,25},
        {600,99},
        {188,5},
    };
    
    sort(v.begin(),v.end());

    for(const auto&p:v){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;

}

