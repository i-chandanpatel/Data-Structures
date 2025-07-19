#include<iostream>
using namespace std;

int main(){
//	int a=15;	//in bits=	00000000 00000000 00000000 00001111	--	--
//	//Left shift(Multiplies the number by 2)					 |	  |
//	cout<<(a<<2)<<endl;	  //00000000 00000000 00000000 00111100	<-	  |
//	//Right shift(Divides the number by 2)							  |
//	cout<<(a>>2)<<endl;   //00000000 00000000 00000000 00000011		<-
//	
//	unsigned int b= 15;
//	cout<<(b<<2);
//	
//	//Above logice works only for Signed +ve or -ve nums and unsigned +ve nums
//	//If unsigned -ve number given 
//	unsigned int c=-15;
//	cout<<(c<<1);
//	
//	//If num Left Shift by  a -ve number
//	//it will not through error and gives garbage value

	//Implicit Type Conversion
	//Compiler promots one type to the larger type
	
//	//int to float
//	int a=10;
//	float b=4.5;
//	float c=a+b;	//a converted into float
//	cout<<c<<endl;
	
//	//char to int
//	char c='A';
//	int a=c;
//	cout<<a;

//	//int to char
//	int a=66;
//	char b=a;
//	cout<<b;
	
//	//Explicit Type Conversion
//	int a=5;
//	cout<<float(a);
//	
//	//int/int always gives int
//	//int/float gives float
//	//float/int gives float
//	
	int a=10;
	int b=3;
	float c=3;
	
	float d=a/b;
	cout<<d<<endl;
	d=a/c;
	cout<<d<<endl;
	
	d=a/float(b);
	cout<<d<<endl;
	
	d=(float)a/b;
	cout<<d<<endl;
	return 0;
}
