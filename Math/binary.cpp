#include <iostream>
#include<math.h>
using namespace std;
// void Decimal_to_binary(int n){
//     int arr[32];
//     int i =0;
//     while(n>0){

//         arr[i]=  n%2;
//         n/=2;
//         i++;
//     } 
//     for(int j = i-1; j>=0; j--){
//         cout<<arr[j];
//     }
// }
void Deci_to_bin(int n){
      
      int ans =0;
      int i =0;
      while(n!=0){
           
           int bit = n&1;
           
           ans = (bit * pow(10,i))+ans;

           n= n>>1;
           i++;
      }
      cout<<ans;
}
int main()
{
     int n;
     cin>>n;
    // Decimal_to_binary(n);
     Deci_to_bin(n);

    return 0;
}