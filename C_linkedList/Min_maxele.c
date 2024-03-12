#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node* travelsel(struct node* ptr) {
    int min = ptr->data;
    int max = 0;
    while(ptr != NULL) {
        
        if(ptr->data < min){
            min = ptr->data;
        }

        if(ptr->data > max){
            max = ptr->data;
        }
        
        ptr = ptr->next;
    }
    printf("THE MAXIMUN ELEMET IS LINKED LIST IS:- %d \n", max);
    printf("THE MINIMUN ELEMET IS LINKED LIST IS:- %d", min);
}




void main(){
     struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* second = (struct node*)malloc(sizeof(struct node));
    struct node* third = (struct node*)malloc(sizeof(struct node));
    struct node* forth = (struct node*)malloc(sizeof(struct node));
    struct node* fifth = (struct node*)malloc(sizeof(struct node));

    head->data = 2;
    second->data = 12;
    third->data = 23;
    forth->data = 0;
    fifth->data = 10;

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = NULL;

    travelsel(head);

}