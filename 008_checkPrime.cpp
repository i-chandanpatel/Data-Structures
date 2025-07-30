#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime

    // Loop from 2 to √n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // Divisible → not prime
    }

    return true; // No divisors found → prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    //Check for prime
    if (isPrime(num))
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
