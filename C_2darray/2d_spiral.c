#include<stdio.h>

int main() {
    int arr[4][4] = {
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };

    int top = 0;
    int bottom = 3; 
    int left = 0;
    int right = 3;

    while (top <= bottom && left <= right) {

        for (int i = left; i <= right; i++) {
            printf("%d ", arr[top][i]);
        }
        top++;

   
        for (int i = top; i <= bottom; i++) {
            printf("%d ", arr[i][right]);
        }
        right--;

     
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }

     
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}

   
