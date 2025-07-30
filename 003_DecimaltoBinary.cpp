#include<iostream>
#include<cmath>
using namespace std;

// Approach 1: Bit method
int decimaltoBinary(int n){
	int ans = 0, i = 0;

	while(n != 0){
		// Extract the least significant bit (LSB)
		int bit = n & 1;  // Example: 6 => 110 → LSB is 0, then 1, then 1

		// Place the bit at the correct position in the binary number
		// We multiply by 10^i because we’re forming the binary number in base 10 (e.g., 110)
		ans = (bit * pow(10, i)) + ans;

		// Shift the number to the right by 1 bit (i.e., divide by 2)
		n = n >> 1;
		i++;
	}
	return ans;
}


// Approach 2: Brute Force
// int decimaltoBinary(int n){
// 	int ans = 0, i = 0;

// 	while(n > 0) {
// 		// Get the remainder when divided by 2 (either 0 or 1)
// 		int rem = n % 2;

// 		// Place the digit in the correct place value (1s, 10s, 100s...)
// 		ans += rem * pow(10, i);

// 		// Reduce the number by dividing by 2
// 		n /= 2;
// 		i++;
// 	}
// 	return ans;
// }

int main(){
	int n;
	cout << "Enter Decimal number: ";
	cin >> n;

	cout << "Binary value: " << decimaltoBinary(n);
	return 0;
}
