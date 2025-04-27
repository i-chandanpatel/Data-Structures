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

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

//Paur Sum on sorted Array
vector<int>pairSumOptimal(vector<int> nums, target){
    vector<int> ans;
    int n = nums.size();

    int i=0, j=n, pairSum;
    while(i<j){
        pairSum=arr[i]+arr[j];
            if (pairSum == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }else if(pairSum>target) j--
            else if(pairSum<target) i++
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 7, 4, 5, 1, 3};
    int target = 6;

    cout << "Pairs with sum " << target << ":\n";
    pairSumBruteForce(arr, target);

    return 0;
}
