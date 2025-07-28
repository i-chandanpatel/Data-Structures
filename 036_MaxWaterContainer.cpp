#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Brute Force approach (O(n^2))
int maxAreaBrute(vector<int>& height) {
    int maxWater = 0;
    for (int i = 0; i < height.size(); i++) {
        for (int j = i + 1; j < height.size(); j++) {
            int ht = min(height[i], height[j]);
            int width = j - i;
            int currWater = ht * width;
            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

// Optimal Two Pointer approach (O(n))
int maxAreaOptimal(vector<int>& height) {
    int left = 0, right = height.size() - 1;
    int maxWater = 0;
    
    while (left < right) {
        int ht = min(height[left], height[right]);
        int width = right - left;
        int currWater = ht * width;
        maxWater = max(maxWater, currWater);

        // Move the shorter line
        if (height[left] < height[right]) 
            left++;
        else 
            right--;
    }
    
    return maxWater;
}

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Max Water (Brute): " << maxAreaBrute(height) << endl;
    cout << "Max Water (Optimal): " << maxAreaOptimal(height) << endl;

    return 0;
}