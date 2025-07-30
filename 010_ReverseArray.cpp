#include<iostream>
using namespace std;

// Recursive function to reverse array from index `start` to `end`
void reverse(int arr[], int start, int end){
        if(start >= end) return;               // Base case: stop if pointers meet or cross
        swap(arr[start], arr[end]);            // Swap current elements
        reverse(arr, start + 1, end - 1);      // Recursive call for next pair
}

// Iterative function to reverse the entire array
void reverse(int arr[], int size){
        int start = 0;
        int end = size - 1;
        while(start < end){                    // Loop until the pointers meet or cross
                swap(arr[start], arr[end]);    // Swap elements at start and end
                start++;                       // Move start forward
                end--;                         // Move end backward
        }
}

int main(){
        int arr[] = {1, 2, 3, 4, 5};                     // Declare and initialize array
        int start = 0;
        int size = sizeof(arr) / sizeof(arr[0]);        // Calculate array size
        int end = size - 1;

//      reverse(arr, start, end);                       // Optionally reverse using recursion
        reverse(arr, size);                              // Reverse using iterative function

        for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
        }

        return 0;
}