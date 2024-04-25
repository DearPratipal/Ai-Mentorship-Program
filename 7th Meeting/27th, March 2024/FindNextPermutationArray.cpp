/* Find the next permutations of Array .

Note :- If not possible then print the sorted order in 
ascending order
(Leetcode -31) */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;
    
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    
    if (i >= 0) {
        int j = n - 1;
        while (j >= 0 && nums[i] >= nums[j]) {
            j--;
        }
        
        swap(nums[i], nums[j]);
    }
    
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};
    
    nextPermutation(nums);
    
    cout << "Next Permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
