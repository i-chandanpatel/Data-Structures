#include<iostream>
using namespace std;

//Basic method using division
bool isPowerOfTwo(int n){
	if(n < 1) return 0; //Not a power of 2 if less than 1
	while(n != 1){
		if(n % 2 == 1) return 0; //Odd number → not a power of 2
		n /= 2; //Keep dividing by 2
	}
	return 1; //Reaches 1 → power of 2
}

//Optimised using bit manipulation
bool isPowerOfTwoOptimised(int n) {
	//(n & (n - 1)) == 0 → true only for powers of 2
	return (n > 0) && ((n & (n - 1)) == 0);
}
//(n & (n - 1)) == 0:
//A power of two in binary has exactly one bit set to 1. 
//e.g., 1, 2, 4, 8 are 0001, 0010, 0100, 1000 in binary.
//Subtracting 1 from a power of two flips all bits after the most significant 1.
//4 (0100) → 4 - 1 = 3 (0011)
//8 (1000) → 8 - 1 = 7 (0111)
//n & (n - 1) will result in 0 if n is a power of two.
int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	//Check using basic method
	if(isPowerOfTwo(num))
		cout << num << " is a power of 2 (Basic Method)" << endl;
	else
		cout << num << " is NOT a power of 2 (Basic Method)" << endl;

	//Check using optimised method
	if(isPowerOfTwoOptimised(num))
		cout << num << " is a power of 2 (Optimised Method)" << endl;
	else
		cout << num << " is NOT a power of 2 (Optimised Method)" << endl;

	return 0;
}
