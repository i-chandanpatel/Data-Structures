#include<iostream>
using namespace std;

int searchInRotatedArray(int arr[], int n, int s){
	int start=0, end=n-1, mid;
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]==s){
			return mid;
		}else if(arr[mid]>=arr[0]){		//Left Side Sorted	{4,5,6,7}
			if(arr[start]<=s && arr[mid]>s)
				end=mid-1;
			else
				start=mid+1;
		}
		else{		//Right Side Sorted	{1,2,3}
			if(arr[mid]<s && arr[end]>=s)
				start=mid+1;
			else
				end=mid-1;
		}
	}
	return -1;
}

int main(){
	int n=6;
	int arr[n]={4,5,6,1,2,3};
	int search=2;
	cout<<searchInRotatedArray(arr,n,search);
	return 0;
}
