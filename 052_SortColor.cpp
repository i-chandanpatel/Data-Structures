//#include <bits/stdc++.h>   // includes all standard headers
#include <iostream>
#include <algorithm>  // for swap
using namespace std;

/*Brute Force Method (Counting sort idea)
  Time: O(n) + O(n) = O(n)
  Space: O(1) extra (just counters)
  Not stable, but simple. */
void sortColorsBrute(int arr[], int n) {
    int zeros = 0, ones = 0, twos = 0;

    // Count number of 0s, 1s and 2s
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeros++;
        else if (arr[i] == 1) ones++;
        else twos++;
    }

    // Overwrite the array in order: 0s, then 1s, then 2s
    int idx = 0;
    while (zeros--) arr[idx++] = 0;
    while (ones--)  arr[idx++] = 1;
    while (twos--)  arr[idx++] = 2;
}

/*-------------------------------------------------------------
 Dutch National Flag Algorithm (Single pass, in-place)
 Idea: 3-way partitioning with low, mid, high pointers
 Time: O(n)
 Space: O(1)
 Not stable, but efficient.
--------------------------------------------------------------*/
void dutchFlag012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            // 0 belongs to left section
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } 
        else if (arr[mid] == 1) {
            // 1 belongs in middle, move ahead
            mid++;
        } 
        else { 
            // arr[mid] == 2 ? goes to right section
            swap(arr[mid], arr[high]);
            high--; // don't increment mid here; check swapped value again
        }
    }
}

int main() {
    int arr[] = {0, 2, 2, 0, 2, 0, 2, 1, 2, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Option 1: Brute Force
    // sortColorsBrute(arr, n);

    // Option 2: Dutch National Flag (recommended)
    dutchFlag012(arr, n);

    // Print result
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

