#include <iostream>
#include<unordered_map>
#include<map>

using namespace std;
int main()
{
    
    string s = "hello";
    map<char,int> freq;
    for(int i =0; i<s.length(); i++){

        freq[s[i]]++;
    }
     unordered_map<char,int>:: iterator it;

     for(auto it :freq){
        cout<<it.first<<" "<<it.second<<" "<<endl;
     }

    return 0;
}