#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int i =1; i<prices.size();i++){
            int diff = prices[i]- buy;
            profit = max(profit, diff);
            buy = min(buy,prices[i]);
        }
        return profit;
    }
};
int main(){
       Solution solution;
       vector<int> prices= {7,1,5,3,6,4};
       int ans  = solution.maxProfit(prices);
       cout<<ans<<endl;

    return 0;
}