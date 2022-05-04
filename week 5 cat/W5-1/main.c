#include <stdio.h>

int main() {
    int x = 10,*p =&x;
    printf("%d\n",x);
    *p = 20;
    printf("%d\n",x);





    return 0;
}
