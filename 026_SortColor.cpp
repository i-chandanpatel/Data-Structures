#include<iostream>
#include<vector>
using namespace std;

void sortColor(vector<int> &arr){
	int n=arr.size();
	int index=0, left=0, right=n-1;
	while(index<=right){
		if(arr[index]==1){
			swap(arr[left],arr[index]);
			left++;
			index++;
		}
		else if(arr[index]==2){
			swap(arr[right],arr[index]);
			right--;	//index++ will not do because here we don't know
						//what value has came from right
		}else	index++;
	}
}

int main(){
	vector<int> arr={2,0,2,1,1,0};
	sortColor(arr);
	
	for(int i=0; i<arr.size(); i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
