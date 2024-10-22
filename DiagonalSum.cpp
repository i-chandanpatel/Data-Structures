#include <iostream>
using namespace std;

int diagonalSum(int arr[][4], int r, int c) {
    int sum = 0;
    for (int i = 0; i < r; i++) {
        sum += arr[i][i];          // Main diagonal
        sum += arr[i][r - 1 - i]; // Secondary diagonal
    }
    // If the matrix has an odd dimension, subtract the middle element once
    if (r % 2 == 1) {
        sum -= arr[r / 2][r / 2];
    }
    return sum;
}

int main() {
    int r = 4, c = 4;
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    cout << diagonalSum(matrix, r, c) << endl;
    return 0;
}

