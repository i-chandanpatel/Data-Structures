#include<iostream>
using namespace std;

int missingNumber(vector<int> arr){
	int sum=0, n=arr.size();
	for(int i=0; i<n;i++){
		sum+=arr[i];
	}
	int totalSum=(n*(1+n))/2;		//AP= n(a+l)/2
	int ans= totalSum-sum;
	return ans;
	
}
int main(){
	veactor<int> arr={1,2,3,4,6,7,8};
	missingNumber(arr);
	return 0;
}
