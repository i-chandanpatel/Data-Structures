#include<iostream>
using namespace std;

int peakIndex(int arr[], int n){
	int start=0, end=n-1, mid;
	
	while(start<=end){
		mid=end+(start-end)/2;
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
			return mid;
		else if(arr[mid]>arr[mid-1])
			start=mid-1;
		else
			end=mid-1;
	}
}
int main(){
	int n=5;
	int arr[n]={4,5,6,2,3};
	cout<<peakIndex(arr,n);
	return 0;
}
