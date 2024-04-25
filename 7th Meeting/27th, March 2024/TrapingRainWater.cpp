// Trapping Rain Water (Leetcode -42)


/* #include <iostream>
#include <vector>

using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;
    
    int left = 0, right = n - 1;
    int maxLeft = height[left], maxRight = height[right];
    int water = 0;
    
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] > maxLeft) {
                maxLeft = height[left];
            } else {
                water += maxLeft - height[left];
            }
            left++;
        } else {
            if (height[right] > maxRight) {
                maxRight = height[right];
            } else {
                water += maxRight - height[right];
            }
            right--;
        }
    }
    
    return water;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    
    cout << "Trapped water: " << trap(height) << endl;
    
    return 0;
}
 */


