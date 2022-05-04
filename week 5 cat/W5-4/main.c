#include <stdio.h>
#define n 5

int fun(int *p)
{
int *start = p;
    int flag =1;
    int temp = 0;
    p++;

    while (flag == 1)
    {
        p = start;
        flag = 0;
        for(int i = 0 ; i < n; i++)
        {

            if (*p < *(p-1))
            {
                flag = 1;
                temp =  *p;
                *p = *(p-1);
                *(p-1) = temp;
            }
            p++;

        }

    }
}
int main() {
    int arr[n] = {4,3,1,5,2};
    fun(arr);
    int *ph = arr;
    for (int i = 0; i < n; ++i)
    {
        printf("%d\n",*ph);
        ph++;
    }

    return 0;
}
