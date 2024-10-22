#include<iostream>
#include<algorithm>
using namespace std;

int trappingRainwater(int height[], int n){
	//left max boundary
	int leftMax[n];
	leftMax[0]=height[0];
	for(int i=1; i<n; i++){
		leftMax[i] = max(leftMax[i - 1], height[i]); 
	}
	//right max boundary
	int rightMax[n];
	rightMax[n-1]=height[n-1];
	for(int i=n-2; i>=0; i--){
		 rightMax[i] = max(rightMax[i + 1], height[i]);
	}
	
	int trappedWater=0;
	for(int i=0; i<n; i++){
		int waterLevel=min(leftMax[i],rightMax[i]);
		trappedWater+=waterLevel-height[i];
	}
	return trappedWater;
}

int main(){
	int n=7;
	int height[n]={4,2,0,6,3,2,5};
	cout<<trappingRainwater(height,n);
	return 0;
}
