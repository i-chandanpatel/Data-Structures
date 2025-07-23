#include <iostream>
using namespace std;

//Binary Exponentiation a.k.a Fast Exponentiation
double fastExpo(double num, int a) {
    double ans = 1.0;
    int exp = abs(a);  //done bcoz while will not work for -ve numbers
    
    while (exp > 0) {
        if (exp & 1) {
            ans *= num; // multiply when the current bit is set
        }
        num *= num; // square the base
        exp >>= 1;  // shift right (divide exponent by 2)
    }

    // If exponent was negative, return reciprocal
    return (a < 0) ? (1.0 / ans) : ans;
}

int main() {
    cout << fastExpo(3, 5) << endl;   // 3^5 = 243
    cout << fastExpo(3, -2) << endl;  // 3^-2 = 1/9 ≈ 0.111...
    cout << fastExpo(2, -3) << endl;  // 2^-3 = 1/8 = 0.125
    return 0;
}
