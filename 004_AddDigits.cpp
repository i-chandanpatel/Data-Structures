int addDigits(int n){
	while(n>9){
		int ans=0, rem;
		while(n!=0){
			rem=n%10;
			n/=10;
			ans+=rem;
		}
		n=ans;
	}
	return n;
}
