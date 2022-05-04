#include <stdio.h>
#define n 5

int fun (int *p1, int *p2)
{
    int dot = 0;
    for(int i = 0 ; i < n ; i++)
    {
        dot+= (*p1)*(*p2);
        p1++;
        p2++;
    }
return dot;
}

int main() {
    int arr1[n]= {1,2,3,4,5},arr2[n] = {1,2,3,4,5};
    printf("%d\n",fun(arr1,arr2));
    return 0;

}
