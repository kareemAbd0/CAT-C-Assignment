#include <stdio.h>

int main() {

    int ID = 3422,n,pass = 227733489,n2,tries = 3;
    printf("Enter ID\n");
    scanf("%d",&n);

    if(n == ID)
    {
        while (tries !=0)
        {
            printf("Enter the password\n");
            scanf("%d",&n2);
            if(n2 == pass)
            {
                printf("Welcome");
                break;
            } else
            {
                printf("You are not registered\n");
                tries --;
            }
        }

    }
    return 0;
}
