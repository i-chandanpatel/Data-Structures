#include<iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int a) {
    // Negative numbers are not considered palindromes
    if (a < 0) return 0;

    // Store the original number
    int num = a, rem, ans = 0;

    // Reverse the number
    while (num) {
        rem = num % 10;         // Get the last digit
        num /= 10;              // Remove the last digit
        ans = ans * 10 + rem;   // Build the reversed number
    }

    // If the original number is equal to its reverse, it's a palindrome
    if (a == ans) return 1;
    else return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a palindrome." << endl;
    else
        cout << n << " is not a palindrome." << endl;

    return 0;
}
