int reverse(int n){
	int ans=0, rem;
	while(n!=0){
		rem=n%10;
		n/=10;
		if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
		ans=ans*10+rem;
	}
	return ans;
}
