#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>& arr, int target){
	int n=arr.size(), ans=-1;
	int start=0, mid, end=n;
	while(start<=end){
		mid=start+((end-start)/2);
		if(arr[mid]==target){
			ans=mid;
			end=mid-1;
		}else if(arr[mid]>target){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return ans;
}

int main(){
	vector<int> arr={1,2,3,3,3,4};
	int ansIndex=firstOccurrence(arr, 3);
	if(ansIndex==-1){
		cout<<"Element not found";
	}else{
		cout<<"Element's first occurrence is at index "<<ansIndex;
	}
	return 0;
}
