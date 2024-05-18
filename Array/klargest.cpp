#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int kth_largest_element(std::vector<int> &nums, int k) {
        // Sort the array in descending order
        sort(nums.begin(), nums.end(), std::greater<int>());
        // Return the kth largest element
        return nums[k - 1];
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 6, 4}; // k = 2
    int k = 2;

    Solution solution;
    int ans = solution.kth_largest_element(nums, k);

    cout << "The " << k << "th largest element is " << ans << std::endl;

    return 0;
}
