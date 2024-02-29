#include<stdio.h>
#include<string.h>


void main(){
    char st[50];
    int size =0;
    int i=0;

    puts("ENTER YOUR STRING:-");
    gets(st);

    while (st[i]!='\0'){
        size++;
        i++;

    }

    for (int i = 0, j = size - 1; i <= j; i++,j--)
    {
        char temp = st[i];
        st[i] = st[j];
        st[j] = temp; 
    }

    puts("YOUR REVERSED STRING IS:-");
    puts(st);
    



}