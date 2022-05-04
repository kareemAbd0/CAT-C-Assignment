#include <stdio.h>
int Get_Max(int x , int y)
{
    if(x > y)
    {
        return x;
    } else
    {
        return y;
    }
}

int main() {

    int n1,n2;
    scanf("%d",&n1);
    scanf("%d",&n2);


    printf("the max is: %d", Get_Max(n1,n2));
    return 0;
}
