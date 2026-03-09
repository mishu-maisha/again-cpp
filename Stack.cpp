#define SIZE 5
#include<bits/stdc++.h>
using namespace std;

class Stack{
  int arr[SIZE], top;

  public:
  Stack(){
    top= -1;
  }

   void push(int val){

   if (top==SIZE-1)
   {
   cout<<"stack oveflow"<<endl;
 }
   else{
   arr[++top]=val;
}
  }

  void pop(){
    if(top== -1){
    cout<<"stack underflow "<<endl;
  }
    else{
    cout<<"Popped "<<arr[top--]<<endl;
  }
  }

  void peek(){
    if(top==-1){
    cout<<"stack empty"<<endl;
 }
    else{
    cout<<"Top element "<<arr[top]<<endl;
 }
  }

  void display(){
    if(top==-1){
        cout<<"stack is empty" <<endl;
    }
    else{
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<endl;;
        }
       
    }

  }

};
int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.peek();

    return 0;
}