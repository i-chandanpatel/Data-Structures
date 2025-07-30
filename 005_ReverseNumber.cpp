#include<iostream>
#include<climits>  // For INT_MAX and INT_MIN
using namespace std;

int reverse(int n){
	int ans = 0, rem;

	while(n != 0){
		rem = n % 10;                   // Extract last digit
		n /= 10;                        // Remove last digit

		// Check for overflow/underflow before updating ans
		if(ans > INT_MAX / 10 || ans < INT_MIN / 10) 
			return 0;

		ans = ans * 10 + rem;           // Add digit in reverse position
	}
	
	return ans;
}

int main(){
	int n;
	cout << "Enter a number: ";
	cin >> n;

	cout << "Reversed number: " << reverse(n) << endl;

	return 0;
}
