#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < (1 << n); ++i) {  // iterate over all possible subsets
            vector<int> v;
            for (int j = 0; j < n; ++j) {
                if ((i & (1 << j)) != 0) {  // check if the j-th bit is set
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.subsets(nums);

    for (const auto& subset : result) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
