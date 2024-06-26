#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* pre;
    node* next;

    node(int data) {
        this->data = data;
        this->next = NULL;
        this->pre = NULL;
    }
    ~node(){
         int data = this->data;
         while(this->next!=NULL){
            delete next;
            this->next =NULL;
            

         }
        cout << "memory free for node with data "<< this->data<< endl;

    }
};

void insertatHead(node* &head, node* &tail, int data) {
    if (head == NULL) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(data);
        temp->next = head;
        head->pre = temp;
        head = temp;
    }
}

void insertattail(node* &head, node* &tail, int data) {
    if (tail == NULL) {
        node* temp = new node(data);
        head = temp;
        tail = temp;
    } else {
        node* temp = new node(data);
        tail->next = temp;
        temp->pre = tail;
        tail = temp;
    }
}
void insertatmiddle(node* &head, node* &tail, int pos, int data){
          if(head == NULL){
            insertatHead(head,tail,data);
            return;
          }

          node* temp = head;
          int cnt=1;
          while(cnt<pos-1){
            temp= temp->next;
            cnt++;
          }

          if(tail==NULL){
            insertattail(head,tail,data);
          }

          node* insertnode = new node(data);
          insertnode->next=temp->next;
          temp->next->pre = insertnode;
          temp->next= insertnode;
          insertnode->pre= temp;

          
}
void deleteNode(int position, node* & head) { 

    //deleting first or start node
    if(position == 1) {
        node* temp = head;
        temp -> next -> pre = NULL;
        head = temp ->next;
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* curr = head;
        node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        curr -> pre = NULL;
        prev -> next = curr -> next;
        curr -> next->pre = prev;
        curr -> next = NULL;
        delete curr;

    }
}



void print(node* &head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    node* head = NULL;
    node* tail = NULL;

    insertatHead(head, tail, 10);
    print(head);
    cout << endl;

    insertatHead(head, tail, 15);
    print(head);
    cout << endl;

    insertattail(head, tail, 5);
    print(head);
    cout << endl;

    insertatmiddle(head,tail,2,25);
    print(head);
    cout << endl;
    

    deleteNode(1,head);
    print(head);
    cout << endl;
    return 0;
}
