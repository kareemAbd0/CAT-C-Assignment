#include <stdio.h>
int x = 3 ,y =4;

void swap()
{
    int c = y;
    y = x;
    x = c;

}

int main() {
    printf("%d %d\n",x,y);
    swap();
    printf("%d %d\n",x,y);
    return 0;
}
