#include <iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
      //constructer
      Node(int data){

          this->data=data;
          this->next= NULL;
      }
};
void insertAttail(Node* &tail, int d){
        Node* temp = new Node(d);
        tail->next = temp;
        tail = temp;

}
void insertAthead(Node* &head, int d){
  
     Node* temp = new Node(d);
     temp->next= head;
     head = temp;

}
void insertAt_any_posititon(Node* &tail,Node* &head, int pos, int d){

            if(pos==1){
                insertAthead(head, d);
                return;
            }
            Node* temp = head;
            int cnt =1;

            while(cnt<pos-1){
                  temp->next = temp;
                  cnt++;
            }
            if(temp->next==NULL){
                insertAttail(tail, d);
                return;
            }
            Node* Insert = new Node(d);
            Insert->next = temp->next;
            temp->next = Insert;

}
void print(Node* &head){
      Node* temp = head;

      while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

      }   

}
int main()
{
          Node* node1 = new Node(5);

 
          Node* head = node1;
          print(head);
          cout<<endl;
          Node* tail = node1;
          insertAttail(tail,10);
          print(head);
          cout<<endl;
          insertAthead(head,17);
          print(head);
          cout<<endl;
          insertAt_any_posititon(tail,head,2,20);
          print(head);
          cout<<endl;
          insertAt_any_posititon(tail,head,1,3);
          print(head);

    return 0;
}