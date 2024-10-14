#include<iostream>
using namespace std;

int minimumInRotatedArray(int arr[], int n){
	int start=0, end=n-1, mid, min=arr[0];
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]<min){
			min=arr[mid];
			end=mid-1;
		}else if(arr[mid]>min){
			start=mid+1;
		}
	}
	return min;
}

int main(){
	int n=6;
	int arr[n]={4,5,6,1,2,3};
	cout<<minimumInRotatedArray(arr,n);
	return 0;
}
