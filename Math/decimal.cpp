#include <iostream>
#include<math.h>
using namespace std;

void binary_to_decimal(int n){
       int ans =0;
        int i =0;
        while(n!=0){

           int digit = n%10;
           if(digit==1){
            ans = ans + pow(2, i);;
           }
           n/=10;
           i++;
        }
     cout<<ans<<endl;
  
}
int main()
{
    int num;
    cin>>num;

    binary_to_decimal(num);
     
    return 0;
}