#include <iostream>
using namespace std;
#define n 100
class stack{
      int* arr;
      int top;

      public:
      stack(){
         arr = new int[n];
         top =-1;
      }
    void push(int x){

       if(top==n-1){
        cout<<"Stack overflow "<<endl;
        return ;
      }
           top++;
          arr[top]=x;
     }
    void pop(){
          if(top==-1){
        cout<<"Stack is empty "<<endl;
        return ;
      }

        top--;
    }
    int Top(){
          if(top==-1){
        cout<<"Stack is empty "<<endl;
        return -1;
      }
      return arr[top];
    }
    bool empty(){
        return top==-1;
    }
};


int main()
{
      
    st.push(10);
    st.push(15);
    st.push(13);
    st.push(12);
    cout<<st.Top()<<endl;
     
     
    return 0;
}