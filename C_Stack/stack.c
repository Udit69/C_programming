#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    int size;
    int top;
    int *arr; 
};

bool is_empty(struct Stack* ptr) {
    if (ptr->top == -1) {
        return true;
    }
    return false;
}

int main() {
    struct Stack jj;
    jj.size = 10;
    jj.arr = (int*)malloc(jj.size * sizeof(int));

    printf("%d",jj.top);

    // Check if stack is empty
    if (is_empty(&jj)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }

    // Don't forget to free the allocated memory
    free(jj.arr);

    return 0;
}
