#include <iostream>
#include <vector>
using namespace std;

int uniqueNumVec(const vector<int>& nums) {
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

//All unique Brute Force
void allUnique(int arr[], int n){
	bool isUnique=true;
	for(int i=0; i<n; i++){
		isUnique=true;
		for(int j=0; j<n; j++){
			if(i!=j && arr[i]==arr[j]){
				isUnique=false;
				break;
			}
		}
		if(isUnique){
			cout<<arr[i]<<endl;
		}
	}
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout<<uniqueNumVec(nums);

    // int arr[]={1,1,5,6,4,4,5};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<uniqueElement(arr,n);

    return 0;
}

//XOR cancels out the same numbers:
//x ^ x = 0, and 0 ^ y = y.
