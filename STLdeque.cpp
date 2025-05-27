#include<iostream>
#include<deque>// deque=double ended queue 
               //dequeue= generic word for popping in queue
using namespace std;
int main(){
   deque<int> d={1,2,3,4,5};//like list

   for(int val:d){
    cout<<val<< " ";
   }
   cout<<endl;
   //every functions like list
   //list=Doubly link list;random access not possible
   //deque=Dynamic array so random acces possible
   //ie: l[2] not possible but d[2] possible
}