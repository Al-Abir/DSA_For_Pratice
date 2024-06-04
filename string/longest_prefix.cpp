#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle the case where the input vector is empty

        string ans = "";
        for (int i = 0; i < strs[0].length(); i++) {
            for (int j = 0; j < strs.size() - 1; j++) {
                if (strs[j][i] != strs[j + 1][i]) return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};

int main() {
    Solution solution;


    vector<string> strs1 = {"flower", "flow", "flight"};
    string s1 = solution.longestCommonPrefix(strs1);
    cout << "Longest common prefix: " << s1 << endl;

    return 0;
}
