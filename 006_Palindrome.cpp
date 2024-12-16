bool isPalindrome(int a){
	if(a<0) return 0;
	int num=a, rem, ans=0;
	while(num){
		rem=num%10;
		num/=10;
		ans=ans*10+rem;
	}
	if(a==ans) return 1;
	else return 0;
}
