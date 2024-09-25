#include<iostream>
using namespace std;
//Use any sorting algorithem to sort the array or give input in sorted manner
int binarySearch(int arr[], int n, int num){
	int mid,start=0,end=n-1;
	
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]==num){
			return mid;
		}else if(arr[mid]>num){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return -1;
}


int main(){
	int n, num;
	cout<<"Enter arra size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Enter number to search: ";
	cin>>num;
	cout<<binarySearch(arr,n,num);
	return 0;
}
