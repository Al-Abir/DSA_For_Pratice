#include <iostream>
#include<unordered_map>
using namespace std;
int transform(string a, string b){
       
     if (a.length() != b.length()) {
        return -1;
    }
    
      unordered_map<char,int> m;
      int n = a.length();
      for(int i =0; i<n; i++){
            m[a[i]]++;
      }    
       for(int i =0; i<n; i++){
            m[b[i]]--;
      }
       for(auto it : m) {
            if(it.second!=0)
            return -1;
      }
      int i = n-1;
      int j = n-1;
      int count =0;
      while(i>=0 && j>=0){
            if(a[i]==b[j]){
                i--;
                j--;
            }else{
                count++;
                i--;
            }
      }
      return count;

}
int main()
{
    
    string A = "EACBD";
    string B = "EABCD";
 
    cout << "Minimum number of operations required is " << transform(A, B) << endl;
    return 0;  
    return 0;
}