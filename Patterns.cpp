#include<iostream>
using namespace std;

//Pattern 1
// *****
// *****
// *****
void pattern1(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//Pattern 2
// *
// **
// ***
void pattern2(int n){
	for(int i=0; i <n; i++){
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//Pattern 3
// 0
// 01
// 012
void pattern3(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

//Pattern 4
//1
//22
//333
void pattern4(int n){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<i;
		}
		cout<<endl;
	}
}

//Pattern 5
//***
//**
//*
void pattern5(int n){
	for(int i=0; i<=n; i++){
		for(int j=0; j<n-i+1; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//Pattern 6
//123
//12
//1
void pattern6(int n){
	for(int i=0; i<=n; i++){
		for(int j=1; j<n-i+1; j++){
			cout<<j;
		}
		cout<<endl;
	}
}

//Pattern 7
//    *
//   ***
//  *****
// *******
void pattern7(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		for(int j=0; j<2*i+1; j++){
			cout<<"*";
		}
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 8
// *******
//  *****
//   ***
//    *
void pattern8(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int j=0; j<2*n-2*i-1; j++){		//j<2*n(2*i+1)
			cout<<"*";
		}
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 9
//   *
//  ***
// *****
//*******
//*******
// *****
//  ***
//   *
void pattern9(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		for(int j=0; j<2*i+1; j++){
			cout<<"*";
		}
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int j=0; j<2*n-2*i-1; j++){
			cout<<"*";
		}
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 10
//*
//**
//***
//****
//***
//**
//*
void pattern10(int n){
	for(int i=0; i<=2*n-1; i++){
		int a=i;
		if(i>n) a=2*n-i;
		for(int j=0; j<a; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

//Pattern 11
//0
//1 0
//0 1 0
//1 0 1 0
void pattern11(int n){
	int print=1;
	for(int i=0; i<n; i++){
		if(i%2!=0) print=1;
		else print=0;
		for(int j=0; j<=i; j++){
			cout<<print<<" ";
			print=1-print;
		}
		cout<<endl;
	}
}

//Pattern 12
//1      1
//12    21
//123  321
//12344321
void pattern12(int n){
	int space=2*(n-1);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<j;
		}
		for(int j=1; j<=space; j++){
			cout<<" ";
		}
		for(int j=i; j>=1; j--){
			cout<<j;
		}
		cout<<endl;
		space=space-2;
	}
}

//Pattern 13
//1
//2 3
//4 5 6
//7 8 9 10
void pattern13(int n){
	int num=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<num++<<" ";
		}
		cout<<endl;
	}
}

//Pattern 14
//A
//A B
//A B C
//A B C D
void pattern14(int n){
	for(int i=0; i<n; i++){
		for(char ch='A'; ch<='A'+i; ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

//Pattern 15
//A B C D
//A B C
//A B
//A
void pattern15(int n){
	for(int i=0; i<n; i++){
		for(char ch='A'; ch<'A'+(n-i); ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

//Pattern 16
//A
//B B
//C C C
//D D D D
void pattern16(int n){
	for(int i=0; i<n; i++){
		char ch='A'+i;
		for(int j=0; j<=i; j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

//Pattern 17
//   A
//  ABC
// ABCDE
//ABCDEFG
void pattern17(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		char ch='A';
		for(int j=0; j<2*i+1; j++){
			cout<<ch;
			ch++;
		}
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 18
//   A
//  ABA
// ABCBA
//ABCDCBA
void pattern18(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		char ch='A';
		int breakPoint=(2*i+1)/2;
		for(int j=1; j<=2*i+1; j++){
			cout<<ch;
			if(j<=breakPoint){
				ch++;
			}else {
				ch--;
			}
		}
		for(int j=0; j<n-i-1; j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 19
//   A
//  ABC
// ABCDE
//ABCDEFG
void pattern19(int n){
	for(int i=0; i<n; i++){
		char ch='Z'-i;
		for(int j=0; j<=i; j++){
			cout<<ch;
			ch++;
		}
		cout<<endl;
	}
//	Other methode
//		for(char ch='E'-i; ch<='E'; ch++){
//			cout<<ch<<" ";
//		}
//		cout<<endl;
}

//Pattern 20
//********
//***  ***
//**    **
//*      *
//*      *
//**    **
//***  ***
//********
void pattern20(int n){
	int space=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n-i; j++){
			cout<<"*";
		}
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		for(int j=0; j<n-i; j++){
			cout<<"*";
		}
		space=space+2;
		cout<<endl;
	}
	space-=2;
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		for(int j=0; j<space; j++){
			cout<<" ";
		}
		for(int j=0; j<=i; j++){
			cout<<"*";
		}
		space-=2;
		cout<<endl;
	}
}
	
//Pattern 21
//*      *
//**    **
//***  ***
//********
//***  ***
//**    **
//*      *
void pattern21(int n){
	int spaces=2*n-2;
	for(int i=1; i<2*n; i++){
		int stars=i;
		if(i>n) stars=2*n-i;
		for(int j=1; j<=stars; j++){
			cout<<"*";
		}
		for(int j=1; j<=spaces; j++){
			cout<<" ";
		}
		for(int j=1; j<=stars; j++){
			cout<<"*";
		}
		cout<<endl;
		if(i<n) spaces-=2;
		else spaces+=2;
	}
}

//Pattern 22
//****
//*  *
//*  *
//****
void pattern22(int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==0 || j==0 || i==n-1 || j==n-1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}

//Pattern 23
//4444444
//4333334
//4322234
//4321234
//4322234
//4333334
//4444444
void pattern23(int n){
	for(int i=0; i<2*n-1; i++){
		for(int j=0; j<2*n-1; j++){
			int top=i;
			int left=j;
			int right=(2*n-2)-j;
			int down=(2*n-2)-i;
			
			cout<<(n-min(min(top,down), min(left, right)));
		}
		cout<<endl;
	}
}

