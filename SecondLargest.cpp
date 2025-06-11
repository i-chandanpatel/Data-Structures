#include<iostream>
using namespace std;

int secondLargest(int *arr, int n){
	int ans=INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i]>ans)
		ans=arr[i];
	}
	int second=INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i]!=ans && arr[i]>second)
		second=arr[i];
	}
	return second;
}
int main(){
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int *arr=new int [n];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int a=secondLargest(arr,5);
	cout<<a;
	
	delete[] arr;
	return 0;
}
