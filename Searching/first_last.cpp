#include <iostream>
using namespace std;
int first(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
      if(arr[mid]==k){
           ans = mid;
           end = mid-1;
      }else if(arr[mid]<k){
            start = mid +1;
      }else{
            end = mid-1;
      }
    }
    return ans;
}
int last(int arr[], int n, int k){
    int start = 0;
    int end = n-1;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
      if(arr[mid]==k){
           ans = mid;
           start = mid +1;
      }else if(arr[mid]<k){
            start = mid +1;
      }else{
            end = mid-1;
      }
    }
    return ans;
}
int main()
{
    int arr[5]= {1,0,3,3,3};
    int key =3;
    cout<<first(arr,5, key);
    cout<<endl;
    cout<<last(arr,5, key);
    cout<<endl;
     
    return 0;
}