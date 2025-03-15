#include<iostream>
using namespace std;
int main (){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i=0;i<10;i++){
        if(i%2==0||i==0){
            sum=sum+i;
        }
    }
    cout<<"Sum of even:"<<sum<<endl;
    sum=0;
    for(int i=0;i<10;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"Sum of odd:"<<sum<<endl;
    return 0;
}
//nothing just fun