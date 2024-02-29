#include<stdio.h>


int main(){
    int r,c;
    int l = 10;


    printf("ENTER ROW:- ");
    scanf("%d",&r);

    printf("ENTER column:- ");
    scanf("%d",&c);
        int brr[r][c];
        int arr[r][c]; 
        int crr [r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = l;
            brr[i][j] = l;

            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    
        
        
        
        
        
        
        
        
        
        for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ",crr[i][j]);
        }
        printf("\n");
    }

}