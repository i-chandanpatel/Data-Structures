#include<iostream>
using namespace std;

int fastExpo(int num, int a) {
    int ans = 1;
    while (a > 0) {
        if (a & 1) {
            ans = ans * num; // Use ans *= num; for clarity
        }
        num *= num; // Square the base
        a >>= 1; // Right shift and assign to a
    }
    return ans;
}

int main() {
    cout << fastExpo(3, 5);
    return 0;
}

