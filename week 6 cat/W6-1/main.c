#include <stdio.h>
struct employee
        {

            float salary , bonus , deduction;


        };
float finance_info_print(float salary,float bonus,float deduction)
{
    float newsalary =salary+(salary*bonus);
    printf("salary: %.2f\n",salary);
    printf("salary after bonus: %.2f \n",newsalary);
    printf("salary after miscellaneous deductions: %.2f \n",newsalary-(newsalary*deduction));



}


int main() {
    struct employee mohsen;
    struct employee maged;
    struct employee mariam;



    printf("enter Mohsen's salary \n");
    scanf("%f",&mohsen.salary);
    printf("enter Mohsen's bonus \n");
    scanf("%f",&mohsen.bonus);
    printf("enter Mohsen's deduction \n");
    scanf("%f",&mohsen.deduction);

    printf("enter Maged's salary \n");
    scanf("%f",&maged.salary);
    printf("enter Maged's bonus \n");
    scanf("%f",&maged.bonus);
    printf("enter Maged's deduction \n");
    scanf("%f",&maged.deduction);

    printf("enter Mariam's salary \n");
    scanf("%f",&mariam.salary);
    printf("enter Mariam's bonus \n");
    scanf("%f",&mariam.bonus);
    printf("enter Maged's deduction \n");
    scanf("%f",&mariam.deduction);

    printf("moshsen financial info : \n");
    finance_info_print(mohsen.salary,mohsen.bonus,mohsen.deduction);
    printf("\n");
    printf("maged financial info : \n");
    finance_info_print(maged.salary,maged.bonus,maged.deduction);
    printf("\n");
    printf("mariam financial info : \n");
    finance_info_print(mariam.salary,mariam.bonus,mariam.deduction);
























    return 0;
}
