#include<stdio.h>


void main(){

    int arr[3][2] = {{4,1},{3,8},{2,4}};
    int brr[2][4] = {{1,2,8,6},{7,9,10,12}};

    int res[3][4];

    int c = 2;

    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j<4; j++){
            res[i][j] = 0;

            for (int l = 0; l < c; l++)
            {
                res[i][j] += arr[i][l] * brr[l][j];
            }
            
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }

    


}