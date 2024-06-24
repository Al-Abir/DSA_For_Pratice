#include <iostream>
#include<algorithm>
using namespace std;
void insertion(int arr[], int n){
     for(int i =1; i<n; i++){
          int key = arr[i];
          int j = i-1;
          while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j = j-1;
          }
          arr[j+1]= key;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
int main()
{
     int arr[] ={10,20,50,30,32,60,34};
     int n = sizeof(arr)/sizeof(arr[0]);

     insertion(arr, n);
     cout<<"Sorting array ";
     printArray(arr, n);
     cout<<endl;
    return 0;
}