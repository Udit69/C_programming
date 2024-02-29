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

    for(int i=0, j=size-1; i<j ; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    
    for (int i = 0; i < size; i++) {
        printf("%d ",arr[i]);
    }


    return 0;
}