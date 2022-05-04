#include <stdio.h>

int main() {
    int n,stars =1;
    printf("Enter the number\n");
    scanf("%d",&n);
    int spaces = n-1;
    for (int i = n; i > 0  ; --i)
    {
        for (int j = spaces; j > 0 ; --j)
        {
            printf(" ");
        }
        //printf(" ");
        for (int j = 0; j < stars ; ++j)
        {
            printf("*");
        }
        printf("\n");
        stars+=2;
        spaces--;

    }


    return 0;
}
