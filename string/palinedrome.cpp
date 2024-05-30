#include <iostream>
#include<string.h>

using namespace std;
class Solution{
    public:
    bool isPalindrome(string s){
          int start=0;
         int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])){start++; continue;}
           if(!isalnum(s[end])){end--;continue;}
           if(tolower(s[start])!=tolower(s[end]))return false;
           else{
               start++;
               end--;
           }
       }
       return true;
    }
};
int main()
{
    
   
     string s ="madam";
     Solution solution;
     bool ans = solution.isPalindrome(s);

     if(ans){
           cout<<"Palinedrome "<<endl;
     }else{
        cout<<"Not Palinedrome "<<endl;
     }






    return 0;
}