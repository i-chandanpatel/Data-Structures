#include<iostream>
#include<algorithm>
using namespace std;
//All zero's in front 

void pointerMethod(int arr[], int n){
	int i=0, j=n-1;
	while(i<j){
		if(arr[i]==1 && arr[j]==0){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
		if(arr[i]==0)	i++;
		if(arr[j]==1)	j--;
	}
}

void countingMethod(int arr[], int n){
	int one=0, zero=0, i=0;
	while(i<n){
		if(arr[i]==1)	one++;
		else	zero++;
		i++;
	}
	i=0;
	while(zero!=0){
		arr[i]=0;
		i++;
		zero--;
	}
	while(one!=0){
		arr[i]=1;
		i++;
		one--;
	}
}
int main(){
	int arr[]={1,0,0,0,1,1,0,1};
	int n=sizeof(arr)/sizeof(arr[0]);
//	pointerMethod(arr,n);
	countingMethod(arr,n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
