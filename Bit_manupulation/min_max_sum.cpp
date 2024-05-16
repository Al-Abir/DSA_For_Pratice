#include <iostream>
#include<limits.h>
using namespace std;
class Solution{
    public:
    int min_max_sum(int arr[], int n){
    
            int min = INT_MAX;
            int max = INT_MIN;

            for(int i =0; i<n; i++){
                if(arr[i]<min){
                    min= arr[i];
                }
                if(max<arr[i]){
                    max=arr[i];
                }
            }

            return max+min;
    }

};
int main()
{
      int t;
      cin>>t;
      while(t--){
          int n;
          cin>>n;

          int arr[n];
          for(int i =0; i<n; i++){
            cin>>arr[i];
          }
          Solution solution;

           int sum =  solution.min_max_sum(arr,n);
           
           cout<<sum<<endl;


      }
     
    return 0;
}