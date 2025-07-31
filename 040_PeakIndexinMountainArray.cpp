#include<iostream>
using namespace std;

int peakIndex(int arr[], int n){
    int start = 0, end = n - 1, mid;

    while(start < end){
        mid = start + (end - start) / 2;

        if(arr[mid] < arr[mid + 1]){
            // You're in the increasing part
            start = mid + 1;
        } else {
            // You're in the decreasing part, maybe this is the peak
            end = mid;
        }
    }
    return start; // or return end; both are same when loop ends
}

int main(){
	int n=5;
	int arr[n]={4,5,6,2,3};
	cout<<peakIndex(arr,n);
	return 0;
}
