#include <iostream>
#include<algorithm>
using namespace std;
void bubblesort(int arr[], int n){
        for (int i = 0; i < n - 1; i++) {
            bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
               
            }
        }
        if (swapped == false)
            break;
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

     bubblesort(arr, n);
     cout<<"Sorting array ";
     printArray(arr, n);
     cout<<endl;
    return 0;
}