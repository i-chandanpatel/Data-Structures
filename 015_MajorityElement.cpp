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

//Optimized
int majorityElement2(vector<int> arr) {
    int size = arr.size();
    sort(arr.begin(), arr.end());

    int freq = 1, val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] == val) {
            freq++;
        } else {
            freq = 1;
            val = arr[i];
        }
        if (freq > size / 2) return val;
    }
    return -1;
}

//Moore's Algorithem
int majorityElement(vector <int> arr){
  int freq=0, ans;
  for(int i=0; i<arr.size(); i++){
    if(freq==0)  ans=arr[i];
    if(ans==arr[i])  freq++;
    else  freq--;
  }
  return ans;
}
