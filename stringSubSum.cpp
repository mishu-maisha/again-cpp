//Print Sum of all Substrings of a String Representing a Number

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="12345";
    int sum=0;// Initialize sum to 0 to accumulate the total of all substrings
    // The string s is hardcoded as "12345" for this example
    // In a real scenario, you might want to read this from user input or another source
    
    int n=s.size();// Get the size of the string s
    // n will be 5 for the string "12345"

    for(int i=0;i<n;i++){// Loop to generate all substrings starting from index i
        // i is the starting index of the substring
        // i goes from 0 to n-1 to cover all starting points
        for(int j=1;j<=n-i;j++){// Loop to generate all substrings starting from index i
            // j is the length of the substring
            // j goes from 1 to n-i to ensure we don't exceed the string length

            string sub= s.substr(i,j);// Extract substring from index i of length j
            int x=stoi(sub); // Convert substring to integer
            sum=sum+x;// Add the integer value to sum
        }
    }
    cout<<sum<<endl;// Output the final sum
    return 0;
}