#include<iostream>
#include<cmath>
using namespace std;

//Approach 1: Bit method
int decimaltoBinary(int n){
	int ans=0, i=0;
	while(n!=0){
		int bit=n&1;	//Extracts least significant bit of n i.e 6=>110  => 0  => 1  => 1
		ans=(bit*pow(10,i))+ans;
		n=n>>1;		//Shifts n right by one bit (/2) i.e 6/2=3 => 3/2=1 => 1/2=0
		i++;
	}
	return ans;
}


//Approach 2: Brute Force
//int decimaltoBinary(int n){
//	int ans=0, i=0;
//	while(n > 0) {
//        ans += (n % 2) * pow(10,i);
//        n /= 2;
//        i++;
//    }
//    return ans;
//}

int main(){
	int n;
	cout<<"Enter Decimal number: ";
	cin>>n;
	cout<<"Binary value: "<<decimaltoBinary(n);
	return 0;
}
