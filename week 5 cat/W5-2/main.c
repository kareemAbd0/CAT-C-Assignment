#include <stdio.h>
int fun (int*p ,int *p2)
{
    int sum = *p + *p2;
    return sum;
}
int main() {

    int x = 5,y = 6;


    printf("%d",fun(&x,&y));
    return 0;
}
