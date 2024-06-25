#include <iostream>
using namespace std;
class Node{
        
        public:
         int data;
         Node* next;
         Node* pre;

       Node(int data){
           this->data = data;
           this->next = NULL;
           this->pre = NULL;
       }  
};
void insertatbegining(Node* &head, Node* &tail, int d){
      if(head==NULL){
           Node* temp = new Node(d);
           head = temp;
           tail = temp;
      }
      else{

      Node* temp = new Node(d);
      temp->next = head;
      head->pre = temp;
      head = temp;

      }
     
}
void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> pre = tail;
        tail = temp;
    }

}
void inseratmidle(Node* head, Node* tail, int pos, int d){
            Node* temp = head;
            int cnt= 1;
            while(cnt<pos-1){
                temp = temp->next;
                cnt++;
            }

            Node* insertNode = new Node(d);
            insertNode->next =  temp->next;
            temp->next->pre = insertNode;
            temp->next = insertNode;
            insertNode->pre = temp;

}
void print(Node* &head){

    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertatbegining(head,tail,3);
    print(head);
    cout<<endl;
    insertatbegining(head,tail,5);
    print(head);
    cout<<endl;
    insertAtTail(tail, head, 1);
     print(head);
     cout<<endl;
     inseratmidle(head,tail,2,20);
      print(head);
     cout<<endl;
    return 0;
}