#include<iostream>
using namespace std;


void insertionSortAscending(int arr[], int n){
	for(int i=1; i<n; i++){
		for(int j=i; j>0; j--){
			if(arr[j]<arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
			else break;
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
void insertionSortDescending(int arr[], int n){
	for(int i=1; i<n; i++){
		for(int j=i; j>0; j--){
			if(arr[j]>arr[j-1]){
				swap(arr[j],arr[j-1]);
			}
			else break;
		}
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Press 0 for Ascending Order OR 1 for descending: ";
	int choice;
	cin>>choice;
	if(choice==0){
		insertionSortAscending(arr, n);
	}
	else{
		insertionSortDescending(arr, n);
	}
	
	return 0;
}
