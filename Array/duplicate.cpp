#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
       public:
       bool containsDuplicate(vector<int>& nums){
          
        //   bool flag = false;
        //   sort(nums.begin(),nums.end());
        //   for(int i =0; i<nums.size()-1;i++){
        //         if(nums[i]==nums[i+1]) return true;
        //   }
        //   return flag;  // O(n∗log(n))
        unordered_map<int,int> mp;
        for(int i:nums) mp[i]++;
        bool flag = false;
        for(auto i:mp){
            if(i.second >= 2) return true;
        }
        return flag; //O(n)
       }
};
int main()
{
     vector<int> nums ={1,2,3,1};
     Solution solution;
     bool ans = solution.containsDuplicate(nums);
     cout<<ans<<endl;
     
    return 0;
}