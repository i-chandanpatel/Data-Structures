#include <iostream>
#include <string>
using namespace std;

string compressString(const string& input) {
    string compressed;
    int count = 1;

    for (int i = 0; i < input.length(); ++i) {
        while (i < input.length() - 1 && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        compressed += input[i];
        if (count > 1) {
            compressed +=to_string(count);
        }
        count = 1;
    }

    return compressed;
}

int main() {
    string original = "aaabbbcccaaa";
    string compressed = compressString(original);

    cout << "Compressed string : " << compressed;
    return 0;
}

