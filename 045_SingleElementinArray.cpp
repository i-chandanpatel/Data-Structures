#include<iostream>
using namespace std;

// Linear scan approach (only works if every pair is together and sorted)
int singleElement(int arr[], int n){
        for(int i = 0; i < n - 1; i += 2){
                // If a pair doesn't match, return the first one
                if(arr[i] != arr[i + 1])        
                        return arr[i];
        }
        // If no mismatch found, single element is at the end
        return arr[n - 1];
}

// XOR approach (works for any order, each element appears twice except one)
int singleElement1(int arr[], int n){
        int result = 0;
        for(int i = 0; i < n; i++){
                result ^= arr[i];  // XOR cancels out pairs, leaves the single one
        }
        return result;
}

// Binary search approach (only works if array is sorted & pairs are together)
int singleElement2(int arr[], int n){
        // Edge case: only one element
        if(n == 1)        
                return arr[0];

        int start = 0, end = n - 1, mid;

        while(start <= end){
                mid = start + (end - start) / 2;

                // Check edge positions
                if(mid == 0 && arr[0] != arr[1])        
                        return arr[mid];

                if(mid == n - 1 && arr[n - 1] != arr[n - 2])        
                        return arr[mid];

                // If current element is not equal to previous and next → it's the single one
                if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1])        
                        return arr[mid];

                // Left half has even number of elements
                if(mid % 2 == 0){
                        // If left pair exists → single is on right
                        if(arr[mid] == arr[mid + 1])        
                                start = mid + 2;
                        else        
                                end = mid - 1;
                }
                // Right half has even number of elements
                else{
                        if(arr[mid] == arr[mid - 1])        
                                start = mid + 1;
                        else        
                                end = mid - 1;
                }
        }
        return -1;  // Just in case nothing found (shouldn't happen)
}

int main(){
        int arr[] = {1, 1, 2, 2, 3, 4, 4};
        cout << singleElement2(arr, 7);
}