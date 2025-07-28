#include<iostream>
using namespace std;

int maxArea(vector<int>& height){
	int ht, width, maxWater, currWater;
	for(int i=0; i<height.size(); i++){
		for(int j=i+1; j<height.size(); j++){
			ht=min(height[i],height[j]);
			width=j-i;
			currWater=ht*width;
			maxwater=max(maxWater,carrWater);
		}
	}
	return maxWater;
}
int maxArea(vector<int>& height){
	int left=0, right=height.size()-1, width, ht, currWater;
	while(left<right){
		width=right-left;
		ht=min(right,left);
		currWater=width*ht;
		maxWater=max(maxWater,currWater);
		if(height[left]<height[right])	left++;
		else	right--;
	}
	return maxWater;
}
int main(){
	
	return 0;
}
