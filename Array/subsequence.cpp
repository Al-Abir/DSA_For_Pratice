#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void subsequence(vector<int>& arr, int index, int n, vector<vector<int>>& ans, vector<int> temp) {
        if (index == n) {
            ans.push_back(temp);
            return;
        }
        // Include the current element
        temp.push_back(arr[index]);
        subsequence(arr, index + 1, n, ans, temp);
        temp.pop_back();
        // Do not include the current element
        subsequence(arr, index + 1, n, ans, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsequence(nums, 0, nums.size(), ans, temp);
        return ans;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = solution.subsets(nums);

    cout << "Subsets:" << endl;
    for (const auto& subset : result) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}
