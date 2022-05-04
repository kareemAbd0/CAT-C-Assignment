#include <stdio.h>

int main() {
    int arr [10];
    int sum = 0;
    printf(" Enter 10 numbers\n");


    for(int i = 0 ; i <10 ; i++)
    {
        scanf("%d\n",&arr[i]);
        sum+=arr[i];

    }
    int average = sum/10;
    printf("summation is %d and average is %d",sum,average);


    return 0;
}
