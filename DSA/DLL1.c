#include <stdio.h> 
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
}Node;

Node* createnewNode(int data) {
  Node* newNode=(Node*)malloc(sizeof(Node));
  if (newNode == NULL) {
    return NULL;
  }
  newNode->data=data;
  newNode->next=NULL;
  newNode->prev=NULL;
  return newNode;
}

void show(Node* head) {
  Node* p=head;
  while(p!=NULL) {
    printf("%d ", p->data);
    p=p->next;
  }
  printf("\n");
}

//insert at beginning:
Node* atbeg(Node*head,int n) {
  Node* newhead=(Node*)malloc(sizeof(Node));
  newhead->data=n;
  head->prev=newhead;
  newhead->next=head;
  head=head->prev;
  head->prev=NULL;
  return head;
}

//insert at the end:



int main() {
  int n;
  Node* head=NULL;
  Node* tail=NULL;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (int i=0; i<n; i++) {
    int value;
    printf("Enter element %d: ", i + 1);
    scanf("%d", &value);

    Node* newNode=createnewNode(value);
    if (head == NULL) {
      head=newNode;
    } else {
      tail->next=newNode;
    }
    newNode->prev=tail;
    tail=newNode;
  }

  printf("Doubly linked list: ");
  show(head);
  printf("\n");

  head=atbeg(head,5);
  show(head);

  return 0;
}