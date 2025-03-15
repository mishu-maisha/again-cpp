#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    cout<<"Insert delete point:"<<endl;
    int m;
    cin>>m;

    for(int i=m;i<n-1;i++){//The condition i < n - 1 ensures the loop runs until the second-to-last element (because we're accessing arr[i + 1]).
        arr[i]=arr[i+1];
    } 
    n--;
   
    

    for(int i=0;i<n;i++){
       cout<<arr[i]<<endl; 
    }
    

 return 0;
}