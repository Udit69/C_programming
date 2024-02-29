#include<stdio.h>

int main(){
    int a[5];

    for(int i=0;i<5;i++){
        printf("  ENTER YOUR MARKS :- ");
        scanf("%d",&a[i]);
    }

    for(int i =0 ; i< 5; i++){
        if(a[i]<35){
            printf("INDEX OF THE STU IS %d and marks are %d \n",i,a[i]);
        }
    }

}