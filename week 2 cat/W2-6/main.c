#include <stdio.h>

int main() {
    int result = 3*4,n;
    while (1)
    {
        printf("what is 3*4 ? \n");

        scanf("%d",&n);

        if(n == result)
        {
            printf("You Are Correct!\n");
            break;
        } else
        {
            printf("Try Again\n");
        }
    }

    return 0;
}
