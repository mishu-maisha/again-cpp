#include <iostream>
using namespace std;

void CountSort(int arr[], int n, int div) {
    int count[10] = {0};
    for (int i = 0; i < n; i++) {
        count[(arr[i] / div) % 10]++;
    }
    for (int i = 1; i < 10; i++) {
        count[i] = count[i] + count[i - 1];
    }

    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output[--count[(arr[i] / div) % 10]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void RadixSort(int arr[], int n) {
    int k = arr[0];
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }

    for (int div = 1; k / div > 0; div *= 10) {
        CountSort(arr, n, div);
    }
}

int main() {
    int arr[] = {170, 90, 802, 2, 24, 45, 75, 66};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    RadixSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}