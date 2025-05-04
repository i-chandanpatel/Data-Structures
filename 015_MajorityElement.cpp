#include<iostream>
using namespace std;

//Bruteforce method 
int majorityElement(vector<int> arr){
  int size=arr.size();
  for(int val: arr){
    int freq=0;
    for(int el :nums){
      if(el==val) freq++;
    }
    if(freq>size/2 or freq==size/2) return val;
  }
return -1;
}

int majorityElement2(vector<int> arr){
  int size=arr.size();
  sort(arr.begin(), arr.end());
  for(int i=0; i<size(); i++){
    
  }
  
}

int main(){
  
}
