
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

int firstOccurrence(vector<int>& arr, int target){
    int n = arr.size();
    int ans = -1;             // To store the result index if target is found
    int start = 0;            // Start of the search space
    int end = n - 1;          // End of the search space (should be n-1)

    // Binary Search
    while(start <= end){
        int mid = start + (end - start) / 2;  // Avoids overflow

        if(arr[mid] == target){
            ans = mid;        // Potential answer found, but keep checking on the right
            start = mid + 1;
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
    int first = firstOccurrence(arr, 3);
    int last = lastOccurrence(arr,3);
    int totalOccurrence = first-last;
  
    cout<<"Total Occurrence: "<<totalOccurrence;

    return 0;
}
