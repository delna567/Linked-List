#include <stdio.h>
#include <stdlib.h>
struct list{
    int n;
    struct list* next;
};
struct list* createNode(int a){
    struct list* node=(struct list*)malloc(sizeof(struct list));
    node->n=a;
    node->next=NULL;
    return node;
}
struct list* insertAtBeginning(struct list* head, int data){
    struct list* newNode=createNode(data);
    newNode->next=head; 
    head=newNode;       
    return head;
}
void print(struct list*head){
    struct list*temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->n);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct list* head = createNode(23);
    head->next = NULL;
    print(head);
    head=insertAtBeginning(head, 11);
    printf("Linked List(after insertion): ");
    print(head);
    return 0;
}
  
