#include<iostream>
using namespace std;

int trailingZerosInFactorial(int num){
	int count=0;
	while(num>=5){
		count+=num/5;
		num/=5;
	}
	return count;
}
int main(){
	cout<<trailingZerosInFactorial(20);
}
