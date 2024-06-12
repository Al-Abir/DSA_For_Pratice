#include<iostream>
#include<string>
#include<stack>
#include<set>
#include<climits>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char>si;
         int start=0;
         int end=0;
         int max = INT_MIN;
         while(start<s.size()){

              auto it = si.find(s[start]);

              if(it==si.end()){

                   if(start-end+1>max){
                      max = start-end+1; //update mx value;
                   }
                   si.insert(s[start]);  //insert new value;
                   start++;
              }else{
                   si.erase(s[end]);  //pop previous element and update end value
                   end++;
              }
        
         }
        return max;

        } 
};
int main(){
         Solution solution;
         string s;
         cin>>s;

        int result = solution.lengthOfLongestSubstring(s);

       cout<<result<<endl;
}
/*
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool allUnique(string s, int start, int end) {
    unordered_set<char> seen;
    for (int i = start; i < end; i++) {
        if (seen.count(s[i])) {
            return false;
        }
        seen.insert(s[i]);
    }
    return true;
}

int lengthOfLongestSubstring(string s) {
    int n = s.size();
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (allUnique(s, i, j)) {
                maxLen = max(maxLen, j - i);
            }
        }
    }
    return maxLen;
}

int main() {
    string s = "abcabcbb";
    cout << lengthOfLongestSubstring(s) << endl; // Output: 3
    return 0;
}
--------------------------------------------------------------------------
 if(s.length() < 2) return s.length();
        int maxLen = 0;
        int l = 0, r = 0;
        unordered_map<char,int> cnt;
        while(r < s.size()){
            ++cnt[s[r]];
            while(cnt[s[r]] > 1){
                --cnt[s[l]];
                l++;
            }
            r++;
            maxLen = max(maxLen,r-l);
        }
        return maxLen;
        ------------------------------------
        int count[256]={0}; 
        int l=0; //i - starting index of window   
        int r=0;  //j - ending index of window
        int ans=0; //length of longest substring no repeating char
        
        while(r<s.length())     
        {
            count[s[r]]++;      
            
            while(count[s[r]]>1)   
            { 
                count[s[l]]--;   
                l++;         
            }
            
            ans = max(ans,r-l+1);   
            r++;   
        }    
        return ans;
        
        --s*/

