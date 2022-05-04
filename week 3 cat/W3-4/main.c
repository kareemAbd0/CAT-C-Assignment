#include <stdio.h>
int function(int ID , int pass)
{
        if (ID == 32442357)
        {
            if(pass == 1232331217)
            {
                printf("you are in\n");
                return 1;
            }

        } else
        {
            return 0;
        }
}

int main() {
    int n1,n2,i = 0,flag = 0;
    while (1)
    {
        printf("enter ID and password\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        if(function(n1,n2))
        {
            break;
        }
        i++;
        if(i == 8)
        {
            flag = 1;
            printf("you are blocked\n");
            break;
        }
    }
    if(flag == 1)
    {
        printf("access denied");
    } else
    {
    printf("Hello, World!\n");
    }

    return 0;
}
