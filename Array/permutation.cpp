#include <iostream>
#include<vector>
using namespace std;
class Solution{
        public:
        vector<vector<int> > ans;
        void helper (vector<int>&nums,int i){
            if(i==nums.size()){
                ans.push_back(nums);
                return;
            }
            for(int j =i ; j<nums.size(); j++){
                  swap(nums[i],nums[j]);
                  helper(nums, i+1);

                  //  backtraking 
                  swap(nums[i], nums[j]);

            }
        }

        vector<vector<int> >permute(vector<int>&nums){
             helper(nums,0);
             return ans;
        }
       
};
int main()
{
    Solution solution;

    vector<int> nums ={1,2,3};

    vector<vector<int> > result = solution.permute(nums);

    for(const auto& permutaion: result){
           cout<<"[ ";
           for(int i: permutaion){
                cout<<i<<" ";
           }cout<<"]"<<endl;
    }
     

    return 0;
}