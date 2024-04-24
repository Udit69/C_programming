#include<stdio.h>
#include<stdlib.h>

int main() {
    int stack[100], top = -1;
    int i, n;
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        stack[++top] = str[i];
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(stack[top--] != str[i]) {
            printf("Not a palindrome\n");
            exit(0);
        }
    }

    printf("Palindrome\n");
    return 0;
}
