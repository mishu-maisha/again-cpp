#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,2,4,8,1,9/*,arr+n*/};

    sort(arr,arr+6);//by default ascending order
    // arr+n indicates the n+1 memory location 
    // this is not included so we weite arr+n to include n elements

    for(int val: arr)
    cout<<val<<" ";
    cout<<endl;

    //vector
    vector <int> v ={20,10,70,50,30};
    //sort(v.begin(),v.end());//use iterator for vector
    sort(v.begin(),v.end(),greater<int>());//use comparator or functor to descend order
    //comparator is a function which builds a comparison logic
    
    for(int val: v){
        cout<<val<<" ";
    }
    cout<<endl;
}