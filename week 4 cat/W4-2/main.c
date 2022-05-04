#include <stdio.h>

int main() {
    int n = 0;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];

    for(int i = 0 ; i < n; i++)
    {
        int in;

        printf("enter element number %d\n",i+1);
        scanf("%d",&in);
        arr[i] = in;
    }

    int temp;
    int flag  = 1;
        while (flag == 1)
        {
            flag = 0;
            for(int i = 1 ; i < n; i++)
            {
                if (arr[i] < arr[i-1])
                {
                    flag = 1;
                    temp =  arr[i];
                    arr[i] = arr[i-1];
                    arr[i-1] = temp;
                }
            }
        }
        printf("%d\n",arr[n-2]);

    }

