#include <stdio.h>

int main() {
 int x= 1  , y =2 ,z = 4 ,*px =&x , *py = &y , *pz = &z;
    printf("%d  %d  %d  %x  %x  %x  %d  %d  %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("swapping pointers\n");
    int *temp = pz;
    pz = px;
    px = py;
    py = temp;
    printf("%d  %d  %d  %x  %x  %x  %d  %d  %d\n",x,y,z,px,py,pz,*px,*py,*pz);




}
