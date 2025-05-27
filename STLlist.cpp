#include<iostream>
#include<list>
using namespace std;
int main(){
 list<int> l;
 //initialize l={1,2,3,4,5}
 l.push_back(1);
 l.push_back(2);
 l.push_front(3);
 l.push_front(5);

 l.pop_back();
 l.pop_front();
 
 for(int val: l){
    cout<<val<<" ";
 }
//functions like vectors:
//size, erase,clear,begin,rbegin,rend,insert,front,back

}