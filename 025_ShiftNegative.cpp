#include <iostream>
using namespace std;

void shiftNegativeOneSide(int arr[], int n) {
    int j = 0;  //index, where -ve number will go
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            swap(arr[i], arr[j]); 
            j++;
        }
    }
}

int main() {
    int arr[] = {1, -7, 12, -10, 11, -40, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    shiftNegativeOneSide(arr, n);

    cout << "After shifting negatives to one side:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}