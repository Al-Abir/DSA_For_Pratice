#include <iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;
class Solution{

    public:
     bool containsduplicate(vector<int> &arr,int n){
       
            /*//n log n approch 
             sort(arr.begin(), arr.end());
              bool flag = false;
             for(int i =0; i<n; i++){

                if(arr[i]==arr[i+1]){
                    return true;
                }

               }

              return flag;
              -------------------------------*/ 
          unordered_set<int> seen;
          for(int nums :arr){
              if(seen.find(nums)!=seen.end()){
                   return true;
              }         
             seen.insert(nums);
          }
          return false;

     }

};
int main()
{       Solution sb;
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        bool result = sb.containsduplicate(arr, n);

        if(result){
            cout<<"True"<<endl;
        }else{
            cout<<"False"<<endl;
        }
    return 0;
}