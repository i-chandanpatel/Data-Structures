#include<iostream>
#include<vector>
using namespace std;

vector<int> seperatedPosNeg(vector<int>& arr){
	int n=arr.size();
	vector<int> positive, negative;
	for(int x: arr){
		if(x<0)	positive.push_back(x);
		else	negative.push_back(x);
	}
	vector<int> result;
	
	int i=0, p=0, n=0;
	while(i<n){
		arr[i++]=positive[p++];
		arr[i++]=negative[n++];
	}
	return arr;
}
int main(){
	vector<int> arr={3,4,-1,-3,2,-9};
	vector<int> ans=seperatedPosNeg(arr);
	for(int x: ans){
		cout<<x<<" ";
	}
	return 0;
}
