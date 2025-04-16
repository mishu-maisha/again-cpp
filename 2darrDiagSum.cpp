#include <iostream>
using namespace std;

//diagonal sum of 2d array

int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int r=3;
    int c=3;
    int diagSum=0;
    /*for n=3 (like odd num) there will be common elements
    one element will repeat twice
     1 2 3
     4 5 6
     7 8 9
     */
    
    //primary diagSum: i=i
    //secondary diagSum:i=n-i-1

    //primary diagSum:
    for(int i=0;i<r;i++){ 
        diagSum+=matrix[i][i];
    //to avoid common elements
    if(i!=r-i-1){
        diagSum+=matrix[i][r-i-1];
    }  
}
  cout<<diagSum<<endl;
    
    return 0;
}