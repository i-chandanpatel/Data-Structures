#include<iostream>
#inxlude<algorithm>
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


int maxSubarraySum2(int arr[], int n) {
    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }

    return maxSum;
}

//Using Prefix Array
int maxSubarraySum_Prefix(int arr[], int n){
	int currSum=0;
	int maxSum=INT_MIN;
	int prefix[n];
	prefix[0]=arr[0];
	for(int i=1; i<n; i++){
		prefix[i]=prefix[i-1]+arr[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			currSum = i == 0 ? prefix[j] : prefix[j] - prefix[i-1];
			
			if(currSum>maxSum)	maxSum=currSum;
		}
	}
	return maxSum;
}

//Using Kadan's Algorihm
int maxSubarraySum_Kadan(int arr[], int n){
	int maxSum=INT_MIN, currSum=0;
	for(int i=0; i<n; i++){
		currSum+=arr[i];
		if(currSum<0)	currSum=0;
		
		maxSum=max(currSum,maxSum);
	}
	return maxSum;
}
int main(){
	int n=6;
	int arr[n]={1,2,3,-4,5,11};
	cout<<maxSubarraySum(arr,n);
//	cout<<maxSubarraySum_Prefix(arr,n);
//	cout<<maxSubarraySum_Kadan(arr,n);
	return 0;
}
