#include<iostream>
using namespace std;

int *createArray(int n){
	return new int[n];
}

void generateFibonacci(int *arr, int n){
	arr[0]=0;
	arr[1]=1;
	for(int i=2; i<n; i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
}

void display(int *arr, int n){
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
	
int main(){
	int n;
	cout<<"Enter fibonacci size";
	cin>>n;
	
	if(n<2){
	cout<<"Fibonacci series contains atleast 2 elements";
	return 1;
	}
	
	int *arr=createArray(n);
	generateFibonacci(arr,n);
	display(arr,n);
	
	delete[] arr;
	return 0;
}
