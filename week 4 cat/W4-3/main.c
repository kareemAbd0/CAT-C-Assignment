#include <stdio.h>
//int max ( int i , array[i])
//
//{
//    int max = 0;
//    for (int j = 0; j < i; ++j)
//    {
//        if (array[j] > max)
//        {
//            max = array[j];
//        }
//
//    }
//    return max;
//}
int main() {
    int n ;

    printf("enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];


    for (int i = 0; i < n; ++i)
    {
        int in;
        printf("enter element number %d\n",i+1);
        scanf("%d",&in);
        arr[i] = in;

    }

    int freq[99] = {0};
    for (int i = 0; i <n ; ++i)
    {
        if (freq[arr[i]] == 0)
        {
            printf("%d  ",arr[i]);
            freq[arr[i]] = 1;
        }

    }



    return 0;
}
