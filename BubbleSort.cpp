#include<iostream>
using namespace std;

//void bubbleSortAscending(int *arr, int n){
//	for(int i=0; i<n; i++){
//		bool swapped=0;
//		for(int j=0; j<n-1; j++){
//			if(arr[j]>arr[j+1]){
//				swapped=1;
//				swap(arr[j],arr[j+1]);
//			}
//		}
//		if(swapped==0)
//		break;
//	}
//	cout<<"Sorted in Ascending Order"<<endl;
//	for(int i=0; i<n; i++){
//		cout<<arr[i]<<" ";
//	}
//}
void bubbleSortAscending(int *arr, int n){
	for(int i=n-2; i>=0; i--){
		bool swapped=0;
		for(int j=0; j<=i; j++){
			if(arr[j]>arr[j+1]){
				swapped=1;
				swap(arr[j],arr[j+1]);
			}
		}
		if(swapped==0)
		break;
	}
	cout<<"Sorted in Ascending Order"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
void bubbleSortDescending(int *arr, int n){
	for(int i=n-2; i>=0; i--){
		bool swapped=0;
		for(int j=0; j<=i; j++){
			if(arr[j]<arr[j+1]){
				swapped=1;
				swap(arr[j],arr[j+1]);
			}
		}
		if(swapped==0)
		break;
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
		bubbleSortAscending(arr,n);	
	}
	else{
		bubbleSortDescending(arr,n);	
	}
	
	delete[] arr;
	return 0;
}
