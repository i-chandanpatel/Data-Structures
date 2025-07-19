#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;


// 1. Brute Force (O(n^3))
// Consider ALL possible subarrays (i..j)
// For each subarray, calculate sum manually by looping
//Keep track of the maximum sum found // Time Complexity: O(n^3) (very slow for large n) 
int maxSubarraySum(int arr[], int n){
    int currSum = 0, maxSum = INT_MIN;
        for (int i = 0; i < n; i++){         // choose starting index 
            for (int j = i; j < n; j++){     // choose ending index currSum = 0; 
                for (int k = i; k <= j; k++){// calculate sum of arr[i..j] 
                    currSum += arr[k]; 
                } maxSum = max(maxSum, currSum);// update max if needed 
            } 
        } 
    return maxSum;
}


// 2. Improved Brute Force (O(n^2)) 
// Logic: Avoid recalculating subarray sum from scratch 
//  - Keep a running sum while expanding subarray 
// Time Complexity: O(n^2) 
int maxSubarraySum2(int arr[], int n){
    int maxSum = INT_MIN; 
    for (int st = 0; st < n; st++) {     // choose starting index 
        int currSum = 0; // reset for each new start 
        for (int end = st; end < n; end++) { // expand subarray 
            currSum += arr[end];         // just add the new element 
            maxSum = max(currSum, maxSum); // update max if needed 
        } 
    } 
    return maxSum; 
}


// 3. Prefix Sum Approach (O(n^2)) 
// Logic: Precompute prefix[i] = sum(arr[0..i]) 
// Any subarray sum(i..j) = prefix[j] - prefix[i-1] 
// Avoids summing repeatedly  Time Complexity: O(n^2) (but faster than brute force) 
int maxSubarraySum_Prefix(int arr[], int n) { 
    int currSum = 0, maxSum = INT_MIN; int prefix[n];  // Stores cumulative sums

// Step 1: Build prefix array
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
// Example: arr = {2, -1, 3, -4, 5}
// prefix = {2, 1, 4, 0, 5}

// Step 2: Use prefix to get subarray sum quickly
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            currSum = (i == 0) ? prefix[j] : prefix[j] - prefix[i - 1];
            maxSum = max(maxSum, currSum);
        }
    }
return maxSum;
}


// 4. Kadane's Algorithm (O(n))
// Logic: Traverse array once 
// At each element, either: * Start a new subarray from arr[i]  * OR extend the previous subarray (currSum + arr[i]) 
// If currSum becomes negative, reset it (it won't help future sums) 
// Keep track of maxSum (global best) Time Complexity: O(n) (optimal) 
int maxSubarraySum_Kadan(int arr[], int n) { 
    int maxSum = arr[0]; // best found so far 
    int currSum = arr[0]; // best ending at current index

    for (int i = 1; i < n; i++) {
        currSum = max(arr[i], currSum + arr[i]); // either take arr[i] or extend
        maxSum = max(maxSum, currSum);          // update global best
    }
return maxSum;
}


// 5. Kadane Variant (LeetCode style) 
// Similar to Kadane but explicitly resets currSum to 0 when negative
// Useful when array may contain all negative numbers 
int maxSubArray(vector<int>& nums) { 
    int currSum = 0, maxSum = INT_MIN;

    for (int val: nums) {
        currSum += val;              // add current element
        maxSum = max(currSum, maxSum); // update best
        if (currSum < 0) currSum = 0;  // reset if negative
    }
return maxSum;
}


int main(){ 
    int n = 6; 
    int arr[n] = {1, 2, 3, -4, 5, 11};

// Try different approaches:
cout << maxSubarraySum(arr, n);
// cout << maxSubarraySum2(arr, n);
// cout << maxSubarraySum_Prefix(arr, n);
// cout << maxSubarraySum_Kadan(arr, n);
return 0;
}

/*

COMPLETE EXPLANATION + EXECUTION EXAMPLE

PROBLEM: Find maximum subarray sum

We need the maximum sum of any contiguous subarray.

1️⃣ Brute Force (O(n^3))

Loop all subarrays i..j

Inner loop calculates sum manually


Example arr = {1,2,3,-4,5,11} Checking: [1] => 1 [1,2] => 3 [1,2,3] => 6 [1,2,3,-4] => 2 [1,2,3,-4,5] => 7 [1,2,3,-4,5,11] => 18 ✅ ... So max = 18

2️⃣ Improved Brute Force (O(n^2))

Still tries all subarrays but keeps running sum.


Start index 0: currSum=1 ->3->6->2->7->18 ✅ Start index 1: currSum=2 ->5->1->6->17 ...

3️⃣ Prefix Sum (O(n^2))

Build prefix = {1,3,6,2,7,18}

Any subarray sum = prefix[j]-prefix[i-1]

sum(2..4)=prefix[4]-prefix[1]=7-3=4

Iterate all i..j using O(1) sum calc.


4️⃣ Kadane (O(n)) ✅ BEST

Traverse once, decide extend or restart.

If currSum < 0, reset.


Execution step: i=0: curr=1 max=1 i=1: curr=3 max=3 i=2: curr=6 max=6 i=3: curr=2 max=6 (adding -4 dropped) i=4: curr=7 max=7 i=5: curr=18 max=18 ✅

So max subarray sum = 18


---

WHY KADANE WORKS:

If current sum is negative, it hurts future sums.

So we reset.

Always track best so far.
*/
