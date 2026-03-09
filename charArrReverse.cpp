#include<iostream> // For input and output streams
#include<bits/stdc++.h> // Includes all standard C++ libraries (GCC only)
using namespace std; // Use the standard namespace

int main() { // Main function
    int n; // Declare variable to store the size of the string
    cin >> n; // Read the size from user
    cin.ignore(); // Clear newline from input buffer after reading n
    char *str = new char[n]; // Dynamically allocate a char array of size n
    cin.getline(str, n); // Read a line of text into str (up to n-1 chars)

    int len = strlen(str); // Get the actual length of the input string
    int start = 0, end = len - 1; // Initialize pointers for start and end of string
    while (start < end) { // Loop until start meets end
        swap(str[start], str[end]); // Swap characters at start and end
        start++; // Move start forward
        end--; // Move end backward
    }
    cout << str << endl; // Print the reversed string
    delete[] str; // Free the dynamically allocated memory
    return 0; // Indicate successful program termination
}