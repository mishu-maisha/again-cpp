#include <iostream>
using namespace std;
int main(){
    int c,r;

    cin>>r;
    cin>>c;
    int mat1[r][c],mat2[r][c],i,j;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>mat2[i][j];
        }
    }
    int sum[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j] ;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

}