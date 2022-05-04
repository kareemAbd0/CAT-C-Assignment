#include <stdio.h>

int main() {
    int arr[5][5];
    for (int i = 0; i < 5 ; ++i)
    {
        printf("enter row %d\n",i+1);


        for (int j = 0; j < 5 ; j++)
        {
            scanf("%d ",& arr[i][j] );
        }

    }
    for (int i = 0; i < 5 ; ++i)
    {
        printf("\n");
        for (int j = 0; j < 5 ; ++j)
        {
            printf("%d ",arr[i][j]);
        }

    }
    printf("\n");
int sum = 0;
    printf("rows total  ");
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5 ; ++j)
        {
            sum+= arr[i][j];
        }
        printf("%d  ",sum);
        sum = 0;
    }
    printf("coloms total  ");
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5 ; ++j)
        {
            sum+= arr[j][i];
        }
        printf("%d  ",sum);
        sum = 0;
    }


    return 0;
}
