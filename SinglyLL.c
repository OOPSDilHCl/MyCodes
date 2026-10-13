#include <stdio.h>
#include <stdlib.h>
struct node{
  int val;
  struct node *next;
};
void printLL(struct node *head){
  if(head==NULL){
    printf("Empty list!");
    return;
  }
  struct node* curr=head;
  while(curr!=NULL){
    printf("%d->",curr->val);
    curr=curr->next;
  }
  printf("NULL\n");
}
struct node* insertAtBeg(int data,struct node* head){
  struct node* newNode=malloc(sizeof(struct node));
  newNode->val=data;
  newNode->next=head;
  return head=newNode;
}
struct node* insertAtEnd(int data,struct node* head){
  struct node* newNode=malloc(sizeof(struct node));
  newNode->val=data;
  if(head==NULL){
    return head=newNode;
  }
  struct node* curr=head;
  while(curr->next!=NULL){
    curr=curr->next;
  }
  curr->next=newNode;
  return head;
}
void freeLL(struct node* head){
  struct node* curr=head;
  while(curr!=NULL){
    struct node* temp=curr->next;
    free(curr);
    curr=temp;
  }
}
int main(){
  struct node* first=malloc(sizeof(struct node));
  struct node* second=malloc(sizeof(struct node));
  struct node* third=malloc(sizeof(struct node));
  first->val=1;
  second->val=2;
  third->val=3;
  first->next=second;
  second->next=third;
  third->next=NULL;
  printLL(first);
  first=insertAtBeg(0,first);
  first=insertAtBeg(-1,first);
  first=insertAtEnd(4,first);
  first=insertAtEnd(5,first);
  printLL(first);
  freeLL(first);
  first=NULL;
  printLL(first);
  return 0;
}