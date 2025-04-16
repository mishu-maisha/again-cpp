#include <iostream>
#include <climits>
using namespace std;

int rowSum(int mat[][3],int row, int col){
    int maxRowSum=INT_MIN;
    for(int i=0;i<row;i++){
        int rowSumi=0;
        for(int j=0;j<col;j++){
            rowSumi=rowSumi+mat[i][j];
            maxRowSum=max(maxRowSum,rowSumi);
        }
        
    }
    return maxRowSum;
}

int main (){
    int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int row=4;
    int col=3;
    cout<< rowSum(mat,row,col)<<endl;

}