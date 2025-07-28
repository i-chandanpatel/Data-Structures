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
vector<int> productExceptSelf(vector<int>& nums){
	int n=nums.size();
	vector<int> ans(n,1);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i!=j)	ans[i]*=nums[j];
		}
	}
	return ans;
}


int main(){
	
	return 0;
}
