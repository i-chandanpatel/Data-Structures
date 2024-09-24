#include<iostream>
using namespace std;

void selectionSortAscending(int *arr, int n){
	for(int i=0;i<n-1;i++){
		int index=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[index])
			index=j;
		}
		swap(arr[i], arr[index]);
	}
	cout<<"Sorted in Ascending Order"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

void selectionSortDescending(int *arr, int n){
	for(int i=0;i<n-1;i++){
		int index=i;
		for(int j=i+1; j<n; j++){
			if(arr[j]>arr[index])
			index=j;
		}
		swap(arr[i], arr[index]);
	}
	cout<<"Sorted in Descending Order"<<endl;
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
	
	cout<<"Press 0 for Ascending Order OR 1 for descending: ";
	int choice;
	cin>>choice;
	if(choice==0){
		selectionSortAscending(arr,n);	
	}
	else{
		selectionSortDescending(arr,n);	
	}
	
	delete[] arr;
	return 0;
}
