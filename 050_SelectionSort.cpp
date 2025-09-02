#include <iostream>
using namespace std;

void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {       // start from 0, not 1
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIndex])
                smallestIndex = j;
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;  // free memory
    return 0;
}

