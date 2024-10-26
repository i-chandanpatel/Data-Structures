#include <iostream>
#include <string>
using namespace std;
//For new version of C++(i.e Version 11 and later)
//void generateBinaryStrings(string current, int n) {
//    if (current.length() == n) {
//        cout << current << endl;
//        return;
//    }
//
//    // Add '0' and continue
//    generateBinaryStrings(current + '0', n);
//    
//    // Add '1' only if the last character is not '1'
//    if (current.empty() || current.back() != '1') {
//        generateBinaryStrings(current + '1', n);
//    }
//}

//For older version
void generateBinaryStrings(string current, int n) {
    if (current.length() == n) {
        cout << current << endl;
        return;
    }

    // Add '0' and continue
    generateBinaryStrings(current + '0', n);
    
    // Add '1' only if the last character is not '1'
    if (current.empty() || (current[current.length() - 1] != '1')) {
        generateBinaryStrings(current + '1', n);
    }
}

int main() {
    int n;
    cout << "Enter the length of binary strings: ";
    cin >> n;

    cout << "Binary strings of length " << n << " without consecutive 1s:" << endl;
    generateBinaryStrings("", n);

    return 0;
}

