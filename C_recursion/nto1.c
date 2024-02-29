#include<stdio.h>



void greet(int n){
    
    
    if (n == 0) return;
    greet(n-1);
    printf("Goodmorning %d\n",n);
    return;

}


void main(){

    int n =4;
    greet(n);

    return;
}