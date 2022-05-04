#include <stdio.h>

int main() {
int hourrate = 50,h;
float salary;

    printf("Enter your hours\n");
    scanf("%d",&h);

    if (h >= 40)
    {
        salary = hourrate*h;
    } else
    {
     salary = (hourrate*0.9f)*h   ;
    }
    printf("your salary is %.02f",salary);
    return 0;
}
