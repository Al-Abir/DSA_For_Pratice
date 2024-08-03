#include <iostream>
using namespace std;
int fact(int n){
     //base condition
     if(n==1){
        return 1;
     }
      return n*fact(n-1);
}
int main()
{
    

    int n;
    cin>>n;

    cout<<fact(n)<<endl;
     
    return 0;
}