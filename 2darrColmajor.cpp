#include <iostream>
using namespace std;
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int r=4;
    int c=3;
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
         cout<<matrix[i][j]<<" ";
        
        }
        cout<<endl;
    }
 
    

    return 0;
}