#include<iostream>
using namespace std;

int maxSubarraySum(int arr[], int n){
	int currSum=0;
	int maxSum=INT_MIN;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			currSum=0;
			for(int k=i; k<=j; k++){
				currSum+=arr[k];
			}
			if(currSum>maxSum)	maxSum=currSum;
		}
	}
	return maxSum;
}

int main(){
	int n=6;
	int arr[n]={1,2,3,-4,5,11};
	cout<<maxSubarraySum(arr,n);
	return 0;
}
