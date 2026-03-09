#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[]={'a','b','c','\0'};// null char=1 byte *if not added '/0' not a valid string
    char str1[10]; //if no value assigned, must be initialised w size
    cin.getline(str1,100,'.');//input any string even w space but stops when . comes
                             // cin.getline(str_name, str_length, delimit) 

    cout<<str1<<endl;

    cout<<str<<endl;

    cout<<str[4]<<endl;//null will be printed
    cout<<strlen(str)<<endl;//null is ignored when calculating length

    /*char str2[]="maisha";
    int len=0;

    for(int i=0; i<str[i]!='\0';i++){
        len++;
    }
    cout<<"length of string: "<< len<<endl;*/

    return 0;
}