#include<iostream>
using namespace std;

//Parameterized
int sum(int i, int sum){
	if(i<1) return sum;
	sum+=i;
	sumOfFirstN(--i,sum);
}

//Functional
int sum(int i){
	if(i==0) return 0;
	return i+sum(i-1);
}

int main(){
	int n;
	cout<<"Enter your number: ";
	cin>>n;
	cout<<sum(n,0);
	cout<<sum(n);
	
	return 0;
}
