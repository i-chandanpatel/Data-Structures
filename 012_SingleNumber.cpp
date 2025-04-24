#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int>& nums) {
    int ans = 0;

    // XOR all elements
    for (int val : nums) {
        ans ^= val;
    }
    return ans;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout<<singleNumber(nums);
    return 0;
}

//XOR cancels out the same numbers:
//x ^ x = 0, and 0 ^ y = y.
