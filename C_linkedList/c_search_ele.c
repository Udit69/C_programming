#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node * next;
};

struct node* travelsel(struct node* ptr,int target) {
    while(ptr != NULL) {
        if(ptr->data == target){
            printf("The data is found in this address %d",ptr);
            break;
        }
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

    travelsel(head,10);

}