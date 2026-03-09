#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    cin.ignore(); // To ignore the newline character after reading t
    // This is necessary to ensure getline works correctly after reading an integer

    /*You use cin >> t; to read an integer from input. When you press Enter, a newline character (\n) remains in the input buffer.
If you immediately use getline(cin, s);, it will read this leftover newline as an empty string, not the next line of actual input.
cin.ignore(); discards (ignores) the next character in the input buffer—usually the newline left after reading t.
Now, when you use getline(cin, s);, it correctly reads the next full line of input.*/

// always use cin.ignore() after reading an integer before using getline to read a string
    while(t--){
        string s;
        getline(cin,s);
        cout<<s<<endl;
    }
return 0;
}