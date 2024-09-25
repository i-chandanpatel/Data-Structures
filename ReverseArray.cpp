#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end){
	if(start>=end) return;
	swap(arr[start],arr[end]);
	reverse(arr,start+1,end-1);
}
void reverse(int arr[], int size){
	int start=0;
	int end=size-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++; end--;
	}
}
int main(){
	int arr[]={1,2,3,4,5};
	int start=0, size=sizeof(arr)/sizeof(arr[0]), end=size-1;
//	reverse(arr,start,end);
	reverse(arr,size);
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
