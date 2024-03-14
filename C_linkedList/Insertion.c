#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};


// Insertion at first node //

struct node* infirst(struct node* head){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = 100;
    newnode->next = head;

    head = newnode;

    return head;
}

struct node* inbetween(struct node* head,int index){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* ptr = head;
    int i = 0;

    while (i != index-1){
        ptr = ptr->next;
        i++;
    }

    newnode->next = ptr->next; 
    ptr->next = newnode;
    
    
}

struct node* inend(struct node* head){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* ptr = head;

    while (ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = newnode;
    newnode->data = 324;
    
}

struct node* travelsel(struct node* ptr) {
    while(ptr != NULL) {
        printf("The element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
    return ptr; 
}

void main(){
    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* forth = (struct node*)malloc(sizeof(struct node));
    struct node* fifth = (struct node*)malloc(sizeof(struct node));

    head->data = 1;
    second->data = 12;
    third->data = 12;
    forth->data = 12;
    fifth->data = 10;

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

   head = infirst(head); 
   travelsel(head);
}