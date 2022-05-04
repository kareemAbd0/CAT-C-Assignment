#include <stdio.h>

int main() {

    int x,y,z;

    scanf("%d %d %d",&x,&y,&z);

    if ( x >= z )
    {
        if (x >= y)
        {
            printf("%d",x);
        } else
        {
            printf("%d",y);
        }
    } else if (z > x)
    {
        if ( z>y)
        {
            printf("%d",z);


        } else
        {
            printf("%d",y);
        }
    }

    return 0;
}
