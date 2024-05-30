#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
          this->data =data;
          this->next= NULL;
    }


};
void insertAtHead(Node* &head,int d){

       Node* temp = new Node(d);
        temp->next = head;
        head = temp;

}
void insertAtTail(Node* &tail, int data){

        Node * temp = new Node(data);
        tail->next = temp;
        tail = temp;
}
void insertAtMid(Node* tail,Node* head, int postion, int data){
         if(postion ==1){
            insertAtHead(head,data);
            return;
         }
        Node* temp = head;
        int cnt =1;
        while(cnt <postion-1){
            temp = temp->next;
            cnt++;
        }
        //
        if(temp->next==NULL){
            insertAtTail(tail,data);
            return;
        }
        //new node create
       Node* nodeinsert = new Node(data);
       nodeinsert->next = temp->next;
       temp->next= nodeinsert;
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
    Node* node1 = new Node(10);

    //cout<<node1->data<<endl;
    Node* head = node1;
    // print(head);
    // cout<<endl;

    // insertAtHead(head,12);

    // insertAtHead(head,15);
    // print(head);
    // cout<<endl;
     Node* tail = node1;
     insertAtTail(tail,6);
     insertAtTail(tail,17);
     insertAtTail(tail,18);
     insertAtTail(tail,28);
     insertAtTail(tail,32);
     insertAtTail(tail,33);
     print(head);
     cout<<endl;

     insertAtMid(tail,head,3,22);
     print(head);
     cout<<endl;

     cout<<head->data<<endl;
     cout<<tail->data<<endl;


    return 0;
}