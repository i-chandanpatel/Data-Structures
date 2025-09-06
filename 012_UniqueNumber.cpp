#include <iostream>
#include <vector>
using namespace std;

// Function to find the unique number in a vector where all other numbers appear twice
int uniqueNumVec(const vector<int>& nums) {
    int ans = 0;

    // XOR all elements in the vector
    // Example: nums = {4, 1, 2, 1, 2}
    // Step by step XOR: 0 ^ 4 = 4
    //                   4 ^ 1 = 5
    //                   5 ^ 2 = 7
    //                   7 ^ 1 = 6
    //                   6 ^ 2 = 4
    // Final answer is 4 (unique number)
    for (int val : nums) {
        ans ^= val;
    }
    return ans;
}

// Same as uniqueNumVec but works on array instead of vector
int uniqueElement(int arr[], int n) {
    int res = 0;
    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        res = res ^ arr[i];
    }
    return res;
}

// Brute force approach to print all unique elements in the array
// This works even when multiple numbers are unique (appear only once)
void allUnique(int arr[], int n) {
    bool isUnique = true;
    
    for (int i = 0; i < n; i++) {
        isUnique = true;

        // Compare arr[i] with all other elements
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;  // Found duplicate, no need to check further
            }
        }

        // If the element is unique, print it
        if (isUnique) {
            cout << arr[i] << endl;
        }
    }
}

int main() {
    // Example where all numbers appear twice except one unique number (4)
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Unique number (using vector & XOR): " << uniqueNumVec(nums) << endl;

    // Example using array (uncomment to run)
    // int arr[] = {1, 1, 5, 6, 4, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);
    // cout << "Unique number (using array & XOR): " << uniqueElement(arr, n) << endl;

    // Example of printing all unique elements in the array
    int arr2[] = {1, 1, 5, 6, 4, 4, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "All unique elements in the array are:\n";
    allUnique(arr2, n2);

    return 0;
}

// XOR Property Reminder:
// x ^ x = 0  (same numbers cancel out)
// 0 ^ y = y  (identity property of XOR)