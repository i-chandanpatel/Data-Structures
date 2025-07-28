#include<iostream>
using namespace std;

//Product of arrau Except itself
//a=[1,2,3]		for a[1]= 2*3	for a[2]=1*3

//Using division
vector<int> productExceptSelf(vector<int>& nums){
	int product=1;
	for(int i=0; i<nums.size(); i++){
		product*=nums[i];
	}
	
	vector<int> ans(nums.size());
	for(int i=0; i<nums.size(); i++){
		ans[i]=product/nums[i];
	}
	return ans;
}

//Brute Force
vector<int> productExceptSelf1(vector<int>& nums){
	int n=nums.size();
	vector<int> ans(n,1);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j)	ans[i]*=nums[j];
		}
	}
	return ans;
}


//Optimal Running Time & Space Complexity=O(n)
vector<int> productExceptSelf2(vector<int>& nums){
	int n=nums.size();
	vector<int>	ans(n);
	vector<int> prefix(n,1);
	vector<int> suffix(n,1);
	
	for(int i=1; i<n; i++){
		prefix[i]=prefix[i-1]*nums[i-1];
	}
	
	for(int i=n-1; i>=0; i--){
		prefix[i]=prefix[i+1]*nums[i+1];
	}
	
	for(int i=0; i<n; i++){
		ans[i]=suffix[i]*prefix[i];
	}
	return ans;
}

//Optimal Running Time=O(n) & Space Complexity=O(1)	if we not consider vector ans
vector<int> productExceptSelf2(vector<int>& nums){
	int n=nums.size();
	vector<int>	ans(n,1);
	int suffix=1;
	//Prefix
	for(int i=1; i<n; i++){
		ans[i]=nums[i-1]*ans[i-1];
	}
	//Suffix
	for(int i=n-2; i>=0; i--){
		suffix*=nums[i+1];
		ans[i]*=suffix;
	}
	
	return ans;
}

int main(){
	
	return 0;
}
