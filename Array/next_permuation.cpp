#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse and std::swap

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, j;
        int n = nums.size();
        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break;
            }
        }
        if (i < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            for (j = n - 1; j >= 0; j--) {
                if (nums[j] > nums[i]) {
                    break;
                }
            }
            swap(nums[i], nums[j]);
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};

int main() {
    // Example vector
    vector<int> nums = {1, 2, 3};
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Print the original vector
    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    // Call the nextPermutation function
    sol.nextPermutation(nums);
    
    // Print the next permutation
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
