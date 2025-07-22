#include <bits/stdc++.h> //includes all header files for cp
#include <iostream>
using namespace std;

int partition(int arr[],int low, int high){
    int pivot=arr[high];  //chose last element as pivot
    int i=low-1;          //index of smaller element

    for(int j=low; j<high; j++){
        if(arr[j]<arr[high]){
        i++;  //increament index of smaller element
        swap(arr[i],arr[j]);
    }

    }
    swap(arr[i+1],arr[high]);  //place pivot in correct position
    return i+1;                //return pivot index
}

void QuickSort(int arr[], int low, int high){
    if(low<high){

    // pi is partitioning index
    int pi=partition(arr,low,high);

    // Recursively sort elements before and after partition
    QuickSort(arr,low,pi-1);
    QuickSort(arr,pi+1,high);
}

}

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int size;
    cout<<"Enter size of the array:"<<endl;
    cin>>size;

    int *arr= new int[size];

    cout<<"Enter the elements:"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Before sorting:"<<" ";
    printArray(arr,size);

    QuickSort(arr,0,size-1);

    cout<<"After sorting:"<<" ";
    printArray(arr,size);


    return 0;
}