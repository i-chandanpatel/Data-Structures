#include<iostream>
using namespace std;
int uniqueElement(int arr[], int n){
	int res=0;
	for(int i=0; i<n; i++){
		res=res^arr[i];
	}
	return res;
}
int main(){
	int arr[]={1,1,5,6,4,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<uniqueElement(arr,n);
	return 0;
}
