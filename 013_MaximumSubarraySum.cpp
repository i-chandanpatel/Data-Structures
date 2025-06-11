#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// Brute Force (O(n^3))
int maxSubarraySum(int arr[], int n) {
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            currSum = 0;
            for (int k = i; k <= j; k++) {
                currSum += arr[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

// Optimized (O(n^2))
int maxSubarraySum2(int arr[], int n) {
    int maxSum = INT_MIN;
    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

// Using Prefix Array (O(n^2))
int maxSubarraySum_Prefix(int arr[], int n) {
    int currSum = 0, maxSum = INT_MIN;
    int prefix[n];  //Stores cumulative sums
    prefix[0] = arr[0];

   //Loop Computes cumulative/prefix sums:
   //prefix[0] = arr[0]
   //prefix[1] = arr[0] + arr[1]
   //prefix[2] = arr[0] + arr[1] + arr[2]
   //If arr = {2, -1, 3, -4, 5}
   //Then prefix = {2, 1, 4, 0, 5}

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    //For each subarray arr[i...j], calculate its sum using the prefix array
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            currSum = i == 0 ? prefix[j] : prefix[j] - prefix[i - 1];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

// Kadane's Algorithm (O(n))
int maxSubarraySum_Kadan(int arr[], int n) {
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]);
        maxSum = max(maxSum, currSum);
    }
    return maxSum;
}

int maxSubArray(vector<int>& nums) {
int currSum = 0, maxSum = INT_MIN;

for(int val: nums) {
currSum += val;
maxSum = max(currSum, maxSum);
if(currSum < 0) {
   currSum = 0;
   }
}

return maxSum;
	}
int main(){
	int n=6;
	int arr[n]={1,2,3,-4,5,11};
	cout<<maxSubarraySum(arr,n);
//	cout<<maxSubarraySum_Prefix(arr,n);
//	cout<<maxSubarraySum_Kadan(arr,n);
	return 0;
}
