#include <iostream>
using namespace std;

// Insertion Sort in Ascending Order
void insertionSortAscending(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];      // pick the current element
        int prev = i - 1;       // compare with previous elements

        // Shift all elements greater than curr to one position ahead
        while (prev >= 0 && arr[prev] > curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        // Place curr at its correct position
        arr[prev + 1] = curr;
    }
}

// Insertion Sort in Descending Order
void insertionSortDescending(int *arr, int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];      
        int prev = i - 1;

        // Shift all elements smaller than curr to one position ahead
        while (prev >= 0 && arr[prev] < curr) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
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
        insertionSortAscending(arr, n);
        cout << "Array sorted in Ascending order: ";
    } else if (choice == 2) {
        insertionSortDescending(arr, n);
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

