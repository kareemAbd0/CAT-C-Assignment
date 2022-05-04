#include <stdio.h>

int main() {

    int n,i = 0;
    scanf("%d",&n);
    if ( n == 0) i = 1;
    else
    {
        while (n != 0)
        {
            n/=10;
            i++;
        }
    }

    printf("%d",i);
    return 0;
}
