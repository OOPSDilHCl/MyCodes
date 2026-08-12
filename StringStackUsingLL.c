#include <stdio.h>
#include <stdlib.h>
struct Node* head=NULL;
struct Node{
  char data;
  struct Node *next;
};
struct Node* push(char character){
  struct Node* newNode=malloc(sizeof(struct Node));
  newNode -> data=character;
  newNode -> next=head;
  head=newNode;
  return head;
}
void peek(){
  printf("%c \n",head -> data);
}
void pop(){
  struct Node* temp=head;
  head=head -> next;
  free(temp);
}
int main(){
  push('c');
  push('b');
  push('a');
  peek();
  pop();
  peek();
  pop();
  peek();
}