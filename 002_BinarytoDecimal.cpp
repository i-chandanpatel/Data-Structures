#include<iostream>
#include<cmath>     // For using the power function pow()
using namespace std;

// Function to convert binary number to decimal
int binarytoDecimal(int n){
	int digit, ans=0, i=0;

	// Run the loop until all digits are processed
	while(n != 0){
		digit = n % 10;      // Get the last digit (either 0 or 1)
		
		if(digit == 1){
			// If digit is 1, add 2^i to the answer
			ans = ans + pow(2, i);
		}
		
		n = n / 10;   // Remove the last digit
		i++;
	}
	
	return ans;
}

int main(){
	int n;
	cout << "Enter Binary number: ";
	cin >> n;

	cout << "Decimal value: " << binarytoDecimal(n);
	
	return 0;
}
