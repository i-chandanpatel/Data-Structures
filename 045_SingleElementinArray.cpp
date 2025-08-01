#include<iostream>
using namespace std;

int singleElement(int arr[], int n){
	for(int i=0; i<n-1; i+=2){
		if(arr[i]!=arr[i+1])	return arr[i];
	}
	return arr[n-1];
}

int singleElement1(int arr[], int n){
	int result=0;
	for(int i=0; i<n; i++){
		result^=arr[i];
	}
	return result;
}

int singleElement2(int arr[], int n){
	if(n==1)	return arr[n];
	
	int start=0, end=n-1, mid;
	
	while(start<=end){
		mid=start + (end-start)/2;
		
		if(mid==0 && arr[0]!=arr[1])	return arr[mid];
		if(mid==n-1 && arr[n]!=arr[n-1])	return arr[mid];
		if(arr[mid-1]!=arr[mid] && arr[mid]!=arr[mid+1])	return arr[mid];
		
		if(mid%2==0){
			if(arr[mid-1]==arr[mid])	end = mid-1;
			else	start = mid+1;
		}else{
			if(arr[mid-1]==arr[mid])	start=mid+1;
			else	end=mid-1;
		}
	}
}
int main(){
	int arr[]={1,1,2,2,3,4,4};
	cout<<singleElement2(arr,7);
	
}
