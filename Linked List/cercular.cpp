#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class cercularLinkelist {
    Node* head;
public:
    cercularLinkelist() {
        head = NULL;
    }

    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            newNode->next = newNode;
            return;
        }
        Node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        tail->next = newNode;
        newNode->next = head;
        head = newNode;
    }
    void insertatail(int data){
        Node* new_node = new Node(data); 
         if(head == NULL){
            head = new_node;
            new_node->next = new_node;
         }
         Node* tail= head;
         while(tail->next!=head){
            tail = tail->next;
         }
         tail->next = new_node;
         new_node->next = head;
    } 

    void display() {
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    cercularLinkelist cl;
    cl.insert(3);
    cl.insert(5);
    cl.insert(7);
    cl.display();

    cl.insertatail(19);
    cl.display();

    return 0;
}
