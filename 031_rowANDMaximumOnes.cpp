#include<iostream>
using namespace std;

vector<int> rowANDMaxOnes(vector<vector<int>>& arr){
	vector<int> ans;
	int oneCount=INT_MIN;	//Stores the max ones found in traversal
	int rowNo=-1;	//row in which we found the max num of ones
	for(int i=0; i<arr.size(); i++){
		int count=0;
		for(int j=0; j<arr[i].size(); j++){
			if(arr[i][j]==0)	cout++;
		}
		if(count>oneCount){
			oneCount=count;
			rowNo=i;
		}
	}
	ans.push_back(rowNo);
	ans.push_back(oneCount);
	return ans;
}
int main(){
	
	return 0;
}
