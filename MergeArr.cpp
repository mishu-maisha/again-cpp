#include <iostream>

void MergeArray(int* A, int m, int* B, int n, int* M) {
    for (int i = 0; i < m; i++) {
        M[i] = A[i];
    }
    for (int i = 0; i < n; i++) {
        M[m + i] = B[i];
    }
}

int main() {
    int m, n;
    std::cout << "Enter the size of array A: ";
    std::cin >> m;
    std::cout << "Enter the size of array B: ";
    std::cin >> n;

    int *a = new int[m];
    int* b = new int[n];
    int* M = new int[m + n];

    std::cout << "Enter elements for array A: ";
    for (int i = 0; i < m; i++) {
        std::cin >> a[i];
    }

    std::cout << "Enter elements for array B: ";
    for (int i = 0; i < n; i++) {
        std::cin >> b[i];
    }

    MergeArray(a, m, b, n, M);

    std::cout << "Merged Array: ";
    for (int i = 0; i < m + n; i++) {
        std::cout << M[i] << " ";
    }
    std::cout << std::endl;

    delete[] a;
    delete[] b;
    delete[] M;

    return 0;
}