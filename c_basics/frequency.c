#include <stdio.h>

int main(){
    int size,cnt = 0;
    printf("ENTER THE SIZE OF ARRAY:- ");
    scanf("%d",&size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        printf("\n Element %d occurs %d Times", arr[i],cnt);

        cnt = 0;
    }

    return 0;
}
