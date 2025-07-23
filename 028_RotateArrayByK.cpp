#include<iostream>
#include<vector>
using namespace std;

void rotateArrayByK(int arr[],int size, int k ){
	int last=arr[size-1];
	vector<int> ans(size);
	for(int i=0; i<size; i++){
		int newIndex=(i+k)%size;
		ans[newIndex]=arr[i];
	}
	arr=ans;
}
int main(){
	int size,k;
	cout<<"Enter array size ";
	cin>>size;
	vector<int> arr(size);
	
	cout<<"Enter array elements"<<endl;
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	
	cout<<"Enter choice to rotate array by";
	cin>>k;
	rotateArrayByK(arr,size,k);
	return 0;
}
