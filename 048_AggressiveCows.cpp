#include <iostream>
#include <vector>
#include <algorithm>  // for sort()
using namespace std;

/*
Assign C cows to N stalls such that min distance between them is largest possible
return largest min distance
N=5   arr=[1,2,8,4,9]   C=3
*/

// Function to check if cows can be placed with at least minAllowedDistance
bool isPossible(vector<int> &arr, int n, int c, int minAllowedDistance) {
    int cows = 1;  // first cow at first stall
    int lastStallPos = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] - lastStallPos >= minAllowedDistance) {
            cows++;
            lastStallPos = arr[i];
        }
        if (cows == c) {
            return true;  // all cows placed successfully
        }
    }
    return false;
}

// Function to find the largest minimum distance
int largestMinDistance(vector<int> &arr, int n, int c) {
    sort(arr.begin(), arr.end());  // stalls sorted
    int start = 1, ans = -1;
    int end = arr[n - 1] - arr[0];  // max possible distance

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, c, mid)) {
            ans = mid;       // mid is possible, try for bigger
            start = mid + 1;
        } else {
            end = mid - 1;   // mid not possible, reduce
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 8, 4, 9};
    int n = arr.size();
    int c = 3;
    cout << largestMinDistance(arr, n, c);
    return 0;
}

