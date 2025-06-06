//Merge two arrays in the first array in discending order
#include <iostream>
#include <vector>
#include <climits>
#include<algorithm>

using namespace std;

void MergeArr(vector<int>&num1, int m,vector<int>& num2,int n){

   num1.resize(m+n);
     for(int i=0;i<n;i++){
        num1[m+i]=num2[i];
     }
     sort(num1.begin(),num1.end()) ;
        
       }
       
int main(){
   int m,n;
   cin>>m>>n;
   vector <int>num1(m);
   vector <int>num2(n);
   
   for(int i=0;i<m;i++){
      cin>>num1[i];
   }
   for(int i=0;i<n;i++){
      cin>>num2[i];
   }
   num1.resize(m+n);
   MergeArr(num1,m,num2,n);

   for(int i=0;i<m+n;i++){
    cout<<num1[i]<<" ";
   }
   cout<<endl;
  /*you cannot use size() instead of taking input for m and n because:If m and n are not initialized with user input before this, they default to 0, making num1 and num2 empty.
size() would return 0, causing input operations to fail.
Vectors don’t dynamically adjust size during input.

*/
return 0; 
 
   
  
}