#include<iostream>
#include<cmath>
using namespace std;

int binarytoDecimal(int n){
	int digit, ans=0, i=0;
	while(n!=0){
		digit=n%10;
		if(digit==1){
			ans=ans+pow(2,i);
		}
		n=n/10;
		i++;
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter Binary number: ";
	cin>>n;
	cout<<"Decimal value: "<<binarytoDecimal(n);
	return 0;
}
