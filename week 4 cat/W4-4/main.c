#include <stdio.h>
int re (int i , int array[] )
{
    int freq[99] = {0};
    for (int j = 0; j < i ; ++j)
    {
        if (freq[array[j]] == 0)
        {
            freq[array[j]] = 1;
        } else
        {
            printf("%d ",array[j]);
        }

    }
}

int main() {
    int arr[6] = {5,5,3,3,1,1};
    printf("Hello, World!\n");
    re(6, arr);
    return 0;
}
