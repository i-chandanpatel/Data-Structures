#include <iostream>
#include <vector>
using namespace std;

void pairSumBruteForce(const vector<int>& nums, int target) {
    int n = nums.size();
    bool found = false;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[i] + nums[j] == target) {
                cout << "[" << nums[i] << ", " << nums[j] << "]" << endl;
                found = true;
                //break;  //If want to find only 1st pair
            }
        }
    }
    if (!found) {
        cout << "No pairs found that sum to " << target << endl;
    }
}

int main() {
    vector<int> arr = {2, 7, 4, 5, 1, 3};
    int target = 6;

    cout << "Pairs with sum " << target << ":\n";
    pairSumBruteForce(arr, target);

    return 0;
}
