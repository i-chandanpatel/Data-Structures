#include<iostream>
#include<climits>
using namespace std;

// 🧪 Check if it's possible to paint all boards within maxAllowedTime
bool isPossible(int arr[], int n, int m, int maxAllowedTime) {
    int painters = 1;  // Start with one painter
    int time = 0;      // Time accumulated by current painter

    for(int i = 0; i < n; i++) {
        // If adding this board exceeds allowed time, assign to next painter
        if(time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painters++;      // Need one more painter
            time = arr[i];   // Start new painter's time with current board
        }
    }

    // ✅ If we used <= m painters, it's feasible
    return painters <= m;
}

// 🧠 Main function to find minimum time using binary search
int painterProblem(int arr[], int n, int m) {
    int sum = 0, maxVal = INT_MIN;

    // 🧮 Calculate total length and max single board
    for(int i = 0; i < n; i++) {
        sum += arr[i];               // Total length of all boards
        maxVal = max(maxVal, arr[i]); // Longest single board
    }

    // 🔍 Binary search range: maxVal to sum
    int start = maxVal, end = sum, ans = -1;

    while(start <= end) {
        int mid = start + (end - start) / 2;

        // 🧪 Check if it's possible to paint with max time = mid
        if(isPossible(arr, n, m, mid)) {
            ans = mid;       // Store current best
            end = mid - 1;   // Try to find smaller max time
        } else {
            start = mid + 1; // Increase time limit
        }
    }

    return ans; //  Minimum time required
}

int main() {
    int arr[] = {40, 30, 10, 20}; //  Board lengths
    int n = 4;                    // Number of boards
    int painters = 2;             // Number of painters

    cout << "Minimum time to paint all boards: " << painterProblem(arr, n, painters) << endl;
    return 0;
}
/*Given N boards of length of each given in form of array
  and M painters such that each painter takes 1 unit
  of time to paint 1 unit of the board
  Task is to find min time to paint all boards
  Constrain:Any painter will only paint continous section

    STEP 1: We want to minimize the time the slowest painter takes.
    STEP 2: Total board length = 100, longest board = 40
    STEP 3: Binary search range = [40, 100]
    STEP 4: Try mid = 70 → feasible with 2 painters
    STEP 4: Try mid = 60 → still feasible
    STEP 4: Try mid = 50 → not feasible (needs 3 painters)
    STEP 6: Final answer = 60

    Board assignment at optimal time (60):
    - Painter 1: 40 + 10 = 50
    - Painter 2: 30 + 20 = 50
    Both painters finish in ≤ 60 units of time.
    */
