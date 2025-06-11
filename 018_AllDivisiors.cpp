#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

void allDivisors(int n) {
    vector<int> div;
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            div.push_back(i);
            if(n / i != i) div.push_back(n / i);  // push the paired divisor
        }
    }
    sort(div.begin(), div.end());  // sort the divisors
    for(int i : div) cout << i << " ";
}

int main() {
    allDivisors(36);
    return 0;
}
