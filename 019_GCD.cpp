#include<iostream>
using namespace std;

//Brute force
int gcd(int a, int b) {
    int ans = min(a, b);  // Start from the smaller number
    while (ans > 0) {
        if(a%ans==0 && b%ans==0)
            return ans;
        ans--;
    }
}
//	Euclidean 	algo
int gcd1(int a, int b){
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
   //cout<<gcd(12,8);
   cout<<gcd1(12,8);  //Best
   //cout<<gcd2(12,8);
	 return 0;
}
