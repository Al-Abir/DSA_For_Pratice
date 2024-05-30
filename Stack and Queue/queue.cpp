#include <iostream>
using namespace std;
#define n 100
class queue{
      int* arr;
      int front;
      int back;
      
      public:
      queue(){
          arr = new int[n];
          front =-1;
          back = -1;
      }

      void enqueue(int x){
          if(back == n-1){
            cout<<"stack over flow"<<endl;
          }
          if(front ==-1){
            front++;
          }
          back++;
          arr[back]=x;

      }
      void dequeue(){
            if(front ==-1 || front>back){
                cout<<"No element in the queue"<<endl;
                return ;
            }
            front++;

      }
      int peek(){
          if(front ==-1 || front>back){
                cout<<"No element in the queue"<<endl;
                return -1;
            }

            return arr[front];
      }
      bool empty(){
           if(front ==-1 || front>back) return true;
           else  return false;
      }


};
int main()
{  
    queue q;
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(12);
    q.enqueue(13);
     cout<<q.peek()<<endl;
     q.dequeue();
     q.dequeue();
     cout<<q.peek()<<endl;
    return 0;
}