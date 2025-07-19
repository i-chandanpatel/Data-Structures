#include<iostream>
using namespace std;

void swapping(int arr[], int n){
	int min=INT_MAX, minI, max=INT_MIN, maxI;
	cout<<"Your array"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}cout<<endl;
	for(int i=0; i<n; i++){
		if(arr[i]<min){
			min=arr[i];
			minI=i;
		}	
		if(arr[i]>max){
			max=arr[i];
			maxI=i;
		}	
	}
	swap(arr[minI],arr[maxI]);
	
	for(int i=0; i<n; i++){
		cout<<arr[i];
	}
}

int main(){
	int n;
	cout<<"Enter array size ";
	cin>>n;
	int *arr=new int[n];
	cout<<"\nEnter elements"<<endl;
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	swapping(arr,n);
	return 0;
	
}
