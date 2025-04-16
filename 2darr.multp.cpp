#include <iostream>
using namespace std;


int main(){
    int r1,c1,r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    int mat1[r1][c1];
    int mat2[r2][c2];
    int result[r1][c2];
    //condition for matrix multp
    if(c1!=r2){
        cout<<"multiplication not possible"<<endl;
    }
    //input mat1     
    for(int i=0;i<r1;i++){ 
        for(int j=0;j<c1;j++){
        cin>>mat1[i][j];
    }

    }
    //input mat2
    for(int i=0;i<r2;i++){ 
        for(int j=0;j<c2;j++){
         cin>>mat2[i][j];}
} 
//initializing result matrix as 0
for(int i=0;i<r1;i++){ 
    for(int j=0;j<c2;j++){
        result[i][j]=0;
} 
}
//logic for mat multp
for(int i=0;i<r1;i++){ 
    for(int j=0;j<c2;j++){
     for(int k=0;k<c1;k++){
        result[i][j]+=mat1[i][j]*mat2[i][j];
     }
    }
   
}
//print result matrix
for(int i=0;i<r1;i++){ 
    for(int j=0;j<c2;j++){
        cout<<result[i][j]<<" ";
}
     cout<<endl;
     }

    return 0;
    }