#include<stdio.h>

int main(){

    int size;
    printf("ENTER SIZE:- ");
    scanf("%d",&size);

     int arr[size];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    } 

    printf("Negative elements in the array: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}