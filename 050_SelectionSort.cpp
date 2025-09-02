#include <iostream>
using namespace std;

// Selection Sort in Ascending Order
void selectionSortAscending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int smallestIndex = i;
        // Find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallestIndex])
                smallestIndex = j;
        }
        // Swap smallest element with current position
        swap(arr[i], arr[smallestIndex]);
    }
}

// Selection Sort in Descending Order
void selectionSortDescending(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int largestIndex = i;
        // Find the index of the largest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[largestIndex])
                largestIndex = j;
        }
        // Swap largest element with current position
        swap(arr[i], arr[largestIndex]);
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];   // dynamic array

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int choice;
    cout << "Choose sorting order:\n1. Ascending\n2. Descending\nEnter choice: ";
    cin >> choice;

    if (choice == 1) {
        selectionSortAscending(arr, n);
        cout << "Array sorted in Ascending order: ";
    } else if (choice == 2) {
        selectionSortDescending(arr, n);
        cout << "Array sorted in Descending order: ";
    } else {
        cout << "Invalid choice!";
        delete[] arr;
        return 0;
    }

    // Print sorted array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    delete[] arr;  // free memory
    return 0;
}
