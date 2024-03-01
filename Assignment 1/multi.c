#include <stdio.h>

void multi(int arr[], int size) {
    int multi[size]; 
    int temp;

    for (int i = 0; i < size; i++) {
        temp = 1;
        for (int j = 0; j < size; j++) {
            if (i != j) {
                temp *= arr[j];
            }
        }
        multi[i] = temp; 
    }

    
    printf("Resulting array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", multi[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 5,6 ,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    multi(arr, size); 

    return 0;
}
