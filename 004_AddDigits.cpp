#include<iostream>
using namespace std;

int addDigits(int n){
	while(n > 9){
		int ans = 0, rem;
		while(n != 0){
			rem = n % 10;     // Extract last digit
			n /= 10;          // Remove last digit
			ans += rem;       // Add digit to sum
		}
		n = ans;              // Replace n with sum of digits
	}
	return n;
}

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;

	cout << "Single digit sum is: " << addDigits(n) << endl;

	return 0;
}
