#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(int arr1[], int arr2[], int m, int n) {
    vector<int> result;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr1[i] == arr2[j]) {
                bool alreadyAdded = false;
                for (int x : result) {
                    if (x == arr1[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    result.push_back(arr1[i]);
                }
            }
        }
    }
    return result;
}

int main() {
    int arr1[] = {1, 2, 4, 1, 7};
    int arr2[] = {12, 23, 4, 12, 7, 7, 9};

    vector<int> common = intersection(arr1, arr2, 5, 7);

    cout << "Intersection elements: ";
    for (int x : common) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
