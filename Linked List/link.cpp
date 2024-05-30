#include <iostream>
#include<stdio.h>
using namespace std;
struct node{
      int data;
      struct node* link;

};
struct node*head;
void print(){
          struct node* temp;
          temp =head;
          while(temp!=NULL){
          printf("%d\n", temp->data);
          temp = temp->link;

          }
         
}

int main()
{      
    head = NULL;
    head =(struct node*)malloc(sizeof(struct node));
    head ->data = 2;
    head->link =(struct node*)malloc(sizeof(struct node));
    head->link->data= 5;
    head->link->link =NULL;
    print();

    return 0;
}