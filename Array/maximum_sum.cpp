#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int maxsumarray(vector <int>& nums){
          // 3 step
          int sum =0;
          int maxi = nums[0];
          for(int i =0; i<nums.size(); i++){
                 //kadane's algortihm

                 sum = sum+ nums[i];

                 maxi = max(sum,maxi);
                 if(sum<0) sum =0;

          }
          return maxi;

    }

};
int main()
{
    Solution solution;
    vector<int> nums ={-2,1,-3,4,-1,2,1,-5,4};
    
     int ans  = solution.maxsumarray(nums);
     cout<<ans<<endl;
    return 0;
}