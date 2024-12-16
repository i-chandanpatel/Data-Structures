bool isPowerOfTwo(int n){
	if(n<1) return 0;
	while(n!=1){
		if(n%2==1) return 0;
		n/=2;
	}
	return 1;
}
//Optimised
bool isPowerOfTwoOptimised(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

//(n & (n - 1)) == 0:
//A power of two in binary has exactly one bit set to 1. 
//e.g., 1, 2, 4, 8 are 0001, 0010, 0100, 1000 in binary.
//Subtracting 1 from a power of two flips all bits after the most significant 1.
//4 (0100) → 4 - 1 = 3 (0011)
//8 (1000) → 8 - 1 = 7 (0111)
//n & (n - 1) will result in 0 if n is a power of two.
