#include<iostream>
using namespace std;

int main() {
    // Type Conversions

    // Implicit: char → int
    char ch = 'A';
    int ascii = ch;
    cout << "ASCII of A: " << ascii << endl;

    // Implicit: int → char
    int num = 66;
    char convertedChar = num;
    cout << "Char for 66: " << convertedChar << endl;

    // Explicit: int → float
    int x = 5;
    cout << "Float(x): " << float(x) << endl;

    // Division Differences
    int a = 10, b = 3;
    float f = 3;

    float d = a / b;
    cout << "int/int: " << d << endl;

    d = a / f;
    cout << "int/float: " << d << endl;

    d = a / float(b);
    cout << "Typecast b: " << d << endl;

    d = (float)a / b;
    cout << "Typecast a: " << d << endl;

    //Bitwise Operations

    unsigned int u = 15;
    cout << "u << 2 = " << (u << 2) << endl; // 15 * 4 = 60
    cout << "u >> 2 = " << (u >> 2) << endl; // 15 / 4 = 3

    //Bitwise NOT (~)
    int bitval = 10;
    cout << "~10 = " << ~bitval << endl; // -11 in 2's complement

    //Signed vs Unsigned

    int signedNeg = -10;
    unsigned int unsignedNeg = -10; // Wraps around
    cout << "Unsigned of -10: " << unsignedNeg << endl;

    //Overflow / Underflow

    unsigned int max = UINT32_MAX;
    cout << "Max unsigned int: " << max << endl;
    cout << "Max + 1 = " << max + 1 << endl; // Wraps to 0

    //Ternary and Type Conversion

    int tern1 = 5;
    float tern2 = 6.7;
    auto result = (tern1 > 3) ? tern1 : tern2;  // Implicit conversion to float
    cout << "Ternary result: " << result << endl;

    //Auto Keyword

    auto i = 42;         // int
    auto fval = 4.2f;    // float
    auto chval = 'x';    // char
    cout << "Auto types: " << i << ", " << fval << ", " << chval << endl;

    //sizeof() operator

    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;

    //Compound Assignment

    int m = 5;
    m += 3.5; // float converted to int
    cout << "m after += 3.5: " << m << endl; // 8 (not 8.5)

    return 0;
}
