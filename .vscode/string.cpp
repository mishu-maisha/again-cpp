#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main (){
     string str1="maisha";
     string str2="mubashshira";
     cout<<(str1==str2)<<endl;//compares in lexicgraphical order
     cout<<(str1<str2)<<endl;//compares in lexicgraphical order
     cout<<str1.length()<<endl;//length of string

     //getline(cin,str_name,delimit) //input any string even with space

     string str4;
     getline(cin,str4);

     for(char ch:str4){
        cout<<ch<<" "; //printing each character of string
     }
     cout<<endl;
     cout<<str4.length()<<endl;

     

}