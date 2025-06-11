#include<iostream>
using namespace std;

//	Euclidean 	algo
int gcd(int a, int b){
   while(a > 0 && b > 0){
      if(a > b) a = a % b;
      else b = b % a;
   }
   if(a==0) return b;
   return a;
}

//Recursion of Euclidean 	algo
int gcd2(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;

    if (a > b) return gcd(a % b, b);
    else       return gcd(a, b % a);
}

int main(){
   cout<<gcd(12,8);
   //cout<<gcd2(12,8);
				return 0;
}