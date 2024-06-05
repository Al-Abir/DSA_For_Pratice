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