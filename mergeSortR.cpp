#include<iostream>
using namespace std;

void merge(int a[], int lb,int mid, int ub){
    //easy merging
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[ub+1];//main array size is ub+1, so do copy array

    //loop for merging
    while(i<=mid && j<=ub ){

    if(a[i]<a[j])//compare 2 subarray
    {
     b[k++]=a[i++];
    }
    else{
        b[k++]=a[j++];
    }
} 
   //if there's left any element in j subarray
   while(j<=ub){
     b[k++]=a[j++];
   }

        while(i<=mid){//left element in i subarray
            b[k++]=a[i++];
        }
        
    for(int l=lb;l<=ub;l++){
        a[l]=b[l];
    }

    /*int n1=mid-lb+1;
    int n2=ub-mid;

    int l[n1], r[n2];
    int i=0, j=0, k=lb;

    for(int i=0;i<n1;i++){
        l[i]=a[lb+i];
    }
    for(int j=0;j<n2;j++){
        r[j]=a[mid+1+j];
    }
    while(i<n1 && j<n2){
        if(l[i]<r[j]){
            a[k++]=l[i++];
        }
        else{
            a[k++]=r[j++];
        }
    }
    while(i<n1) a[k++]=l[i++];
    while(j<n2) a[k++]=r[j++];*/
}


void mergeSort(int a[],int lb, int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;

    int *a = new int [n];

    cout<<"Enter unsorted array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    mergeSort(a,0,n-1);

    cout<<"Merge sorted array: ";
    for(int i=0;i<n; i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;
    return 0;
}