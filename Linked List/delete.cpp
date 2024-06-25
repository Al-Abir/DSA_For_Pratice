#include <iostream>
using namespace std;
class Node{
       public:
       int data;
       Node* next;
        //constructor
       Node(int data){
           this->data = data;
           this->next = NULL;
       }
       ~Node(){
           int value = this->data;
         if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout<<"Memeory free";
       }
    
};
void insertAtHead(Node* &head, int d){

         Node* temp = new Node(d);
         temp->next = head;
         head = temp;
         

}
void instertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail->next= temp;
    tail = temp;
}
void insertAtMiddle(Node* &tail ,Node* &head, int pos, int d){
           
          if(pos == 1){
             insertAtHead(head,d);
            return;
          Node* temp = head;
          int cnt =1;
          while(cnt<pos-1){
              temp = temp->next;
              cnt++;
          }
          if(temp->next==NULL){
            instertAtTail(tail,d);
            return;
        }

          //node create

          Node* insertmid = new Node(d);
          insertmid  = temp->next;
          temp->next =insertmid ;

   } 
}
void  deleteNode(int pos, Node* &head){
      
           if(pos==1){
             Node* temp = head;
             head = head->next;
             temp->next=NULL;
             delete temp;
           }else{
               Node* current = head;
               Node* pre = NULL;
               int cnt= 1;
               while(cnt<pos){
                  pre = current;
                  current = current->next;
                  cnt++;

               }
                pre->next = current->next;
                current->next=NULL;
               delete current;

           }
}

void print(Node* &head){

    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
int main()
{
    Node* node1 = new Node(10);
 
    cout<<endl;
    Node* head = node1;
    insertAtHead(head,12);
    print(head);
    cout<<endl;
    cout<<endl;
    Node* tail = node1;
    instertAtTail(tail,20);
    print(head);
    cout<<endl;
    cout<<"Insert at midle "<<endl;
    insertAtMiddle(tail,head,1,22);
    print(head);
    cout<<endl;

    cout<<"delete the position 2 "<<endl;
    deleteNode(2, head);
     print(head);
     
    return 0;
}