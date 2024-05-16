#include <iostream>
using namespace std;
class Solution{
     public:
     int count(int n){
        int cnt=0;
        while(n){
           cnt++;
           n &= (n-1);
        }
        return cnt;
     }


};
int main()
{   int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Solution solution;

        int cnt = solution.count(n);
        cout<<cnt<<endl;

    }
     
     
    return 0;
}