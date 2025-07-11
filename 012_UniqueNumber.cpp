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

int uniqueElement(int arr[], int n){
	int res=0;
	for(int i=0; i<n; i++){
		res=res^arr[i];
	}
	return res;
}
int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout<<singleNumber(nums);

    // int arr[]={1,1,5,6,4,4,5};
	// int n=sizeof(arr)/sizeof(arr[0]);
	// cout<<uniqueElement(arr,n);

    return 0;
}

//XOR cancels out the same numbers:
//x ^ x = 0, and 0 ^ y = y.
