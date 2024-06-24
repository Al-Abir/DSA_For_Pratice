#include <iostream>
#include<algorithm>
using namespace std;
void selectionsort(int arr[], int n)
{
       for(int i=0; i<n-1; i++){
           int minimum = i;
           for(int j =i+1; j<n; j++){
                if(arr[j]<arr[minimum]){
                    minimum = j;
                }
           }
           swap(arr[i],arr[minimum]);
       }
}
void print(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
int main()
{
    
     int n;
     cin>>n;
     int arr[n];
     for(int i =0; i<n; i++){
        cin>>arr[i];
     }
     selectionsort(arr, n);

     print(arr,n);
    return 0;
}