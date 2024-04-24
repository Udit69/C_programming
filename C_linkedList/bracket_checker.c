#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int stack[100], top = -1;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == '(') {
            stack[++top] = '('; 
        } else if(str[i] == ')') {
            if(top == -1 || stack[top--] != '(') {
                printf("BRACKETS ARE NOT CORRECT\n");
                return 0; 
            }
        }
    }

    if(top > -1) {
        printf("BRACKETS ARE NOT CORRECT\n");
    } else {
        printf("BRACKETS ARE CORRECT\n");
    }

    return 0;
}
