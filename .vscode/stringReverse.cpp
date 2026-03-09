#include <iostream>
#include <bits/stdc++.h>    
using namespace std;

int main() {
    string str;
    getline(cin, str);
    reverse(str.begin(), str.end()); // reverse the string
    cout << str << endl; // print reversed string
    return 0;
}
