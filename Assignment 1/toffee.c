#include <stdio.h>

void sortt(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {9, 3,4 ,1 ,65, 7, 8, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    sortt(arr, size);

    int child;
    printf("ENTER THE NUMBER OF CHILDREN: ");
    scanf("%d", &child);

    int min = arr[size - 1] - arr[0];

    for (int i = 0; (i + child - 1) < size; i++) {
        int diff = arr[i + child - 1] - arr[i];
        if (diff < min) {
            min = diff;
        }
    }

    printf("Minimum difference between the packets: %d\n", min);

    return 0;
}




