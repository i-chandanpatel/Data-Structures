#include<iostream>
#include<vector>
using namespace std;

// Function to find the first occurrence of a target in a sorted array
int firstOccurrence(vector<int>& arr, int target){
    int n = arr.size();
    int ans = -1;             // To store the result index if target is found
    int start = 0;            // Start of the search space
    int end = n - 1;          // End of the search space (should be n-1)

    // Binary Search
    while(start <= end){
        int mid = start + (end - start) / 2;  // Avoids overflow

        if(arr[mid] == target){
            ans = mid;        // Potential answer found, but keep checking on the left
            end = mid - 1;
        }
        else if(arr[mid] > target){
            end = mid - 1;    // Discard right half
        }
        else{
            start = mid + 1;  // Discard left half
        }
    }

    return ans;  // Returns index of first occurrence, or -1 if not found
}

int main(){
    vector<int> arr = {1, 2, 3, 3, 3, 4};
    int ansIndex = firstOccurrence(arr, 3);  // Searching for first occurrence of 3

    if(ansIndex == -1){
        cout << "Element not found";
    } else {
        cout << "Element's first occurrence is at index " << ansIndex;
    }

    return 0;
}