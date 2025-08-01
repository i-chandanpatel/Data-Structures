#include <iostream>
#include <vector>
using namespace std;

int main() {
    //We can create arrays Dynamically
    // int n;
    // cin>>n;
    // int *arr=new int[n];

    //But if even after creating Array Dynamically, there could be a
    //need of more space and there vector comes in picture
    //it doubles the size when it fulls
    vector<int> vec = {5, 2, 9, 1, 7};
    vec.push_back(3);                  // Add to end
    
    vec.insert(vec.begin(), 2);        // Add to start
    vec.insert(vec.begin(), 1);
    vec.insert(vec.begin(), 0);

    cout << "Element at index 1: " << vec.at(1) << endl;

    vec.pop_back();                    // Remove last
    vec.erase(vec.begin());            // Remove first

    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    cout << "Element at index 2: " << vec[2] << " OR " << vec.at(1) << endl;

    //size() = actual number of elements in the vector.
    //capacity() = memory space allocated (may be more than size).
    //Capacity grows dynamically: usually doubles when full.
    cout << "Size: " << vec.size() << endl;
    cout << "Capacity: " << vec.capacity()<< endl;

    vec.clear();
    cout << "Size after clear: " << vec.size() << endl;

    return 0;
}
