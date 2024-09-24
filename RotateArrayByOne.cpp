#include<iostream>
using namespace std;

void rotateArrayByOne(int *arr, int n){
	int last=arr[n-1];
	for(int i=n-2; i>=0; i--){
		arr[i+1]=arr[i];
	}
	arr[0]=last;
	cout<<"Rotated array"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
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
	cout<<endl;
	
	cout<<"Original Array"<<endl;;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	
	rotateArrayByOne(arr,n);
	
	delete[] arr;
	return 0;
}
