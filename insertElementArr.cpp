#include <iostream>

using namespace std;

int main() {
    int n; // Original size of the array
    cout << "Enter the original size of the array: ";
    cin >> n;

    int* arr = new int[n + 1]; // Dynamically allocate array with increased size
    //new: This is the dynamic memory allocation operator in C++. It's used to request memory from the heap (also known as the free store) during runtime.

    cout << "Enter the elements of the array (size " << n << "):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m; // Position of insertion
    cout << "Enter the position of insertion (1 to " << n + 1 << "): ";
    cin >> m;

    if (m < 1 || m > n + 1) {
        cout << "Invalid insertion position." << endl;
        delete[] arr; // Free the allocated memory
        return 1;
    }

    int x; // Data to be inserted
    cout << "Enter the data to be inserted: ";
    cin >> x;

    // Shift elements from position m to n
    for (int i = n; i >= m; i--) {
        arr[i] = arr[i - 1];
    }

    arr[m ] = x; 

    cout << "Array after insertion:" << endl;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Free the allocated memory
    //Always remember to delete[] arr; when you no longer need the dynamically allocated array to prevent memory leaks.
    return 0;
}