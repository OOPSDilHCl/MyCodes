#include <stdio.h>
#include <stdlib.h>
struct Node* head=NULL;
struct Node{
  int data;
  struct Node *next;
};
struct Node* push(int element){
  struct Node* newNode=malloc(sizeof(struct Node));
  newNode -> data=element;
  newNode -> next=head;
  head=newNode;
  return head;
}
void peek(){
  printf("%d \n",head -> data);
}
void pop(){
  struct Node* temp=head;
  head=head -> next;
  free(temp);
}
int main(){
  push(3);
  push(2);
  push(1);
  peek();
  pop();
  peek();
  pop();
  peek();
}