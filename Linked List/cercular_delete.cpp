#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class CercularLinkelist
{
    Node *head;

public:
    CercularLinkelist()
    {
        head = NULL;
    }

    void insertatfirst(int d)
    {
        Node *new_node = new Node(d);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = new_node;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
    void insertatlast(int d)
    {
        Node *new_node = new Node(d);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = new_node;
        }
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = new_node;
        new_node->next = head;
    }
    void delete_at_start(){
         if(head==NULL){
            return; 
         }
         Node* temp = head;
         Node* tail = head;

         while(tail->next!=head){
            tail = tail->next;
         }
         head = head->next;
         tail->next = head;
         free(temp);
    }
    void delete_last(){

          if(head = NULL) return;

          Node* tail = head;
          while(tail->next->next!=head){
            tail = tail->next;
          }
          Node* temp = tail->next;
          tail->next = head;
          free(temp);
    }
    void display()
    {

        if (head == NULL)
        {
            cout << "LinkeLisyt is Empty";
        }
        Node *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }
};
int main()
{
    CercularLinkelist cll;
    cll.insertatfirst(7);
    cll.insertatfirst(8);
    cll.display();
    cout << endl;
    cll.insertatlast(10);
    cll.display();
    cout<<endl;
    cll.delete_at_start();
    cll.display();

    return 0;
}