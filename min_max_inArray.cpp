#include <iostream>
#include <string>
using namespace std;

string smallest(int arr[], int size) {
    int smaller = arr[0], index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] < smaller) {
            smaller = arr[i];
            index = i;
        }
    }
    return"Smallest Value: " + to_string(smaller) + " Index: " + to_string(index);
}

string largest(int arr[], int size) {
    int larger = arr[0], index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > larger) {
            larger = arr[i];
            index = i;
        }
    }
    
    return "Largest Value: " + to_string(larger) + " Index: " + to_string(index);
}

int main() {
    int arr[6] = {2, 1, 3, -5, 0, -9};
    int size = sizeof(arr) / sizeof(int);
    cout << smallest(arr, size) << endl;
    cout << largest(arr, size) << endl;
    return 0;
}
