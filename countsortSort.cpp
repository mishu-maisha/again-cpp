#include<iostream>
using namespace std;

void CountSort(int arr[], int n);

int main () {
    int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    cout<<"Sorted array"<<endl;
    CountSort(arr, 9);
    return 0;
}

void CountSort(int arr[], int n) { 
    int k = arr[0];
   
    // Calculating the range (max value) of the array
    for (int i = 0; i < n; i++) {
        k=max(k,arr[i]);
    }

    // Counting each value
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // Determining the position
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }

    // Traversing the array and placing the values in the output array
    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }

    // Copying the sorted values from output to arr
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
        cout<<arr[i]<<" ";
    }
}
