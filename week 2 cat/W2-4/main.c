#include <stdio.h>

int main() {
   int grade;
    printf("Please enter your grade\n");
    scanf("%d",&grade);

    if (grade >= 85)
    {
        printf("Excellent");
    } else if (grade >=75)
    {
        printf("Very Good");
    } else if ( grade >= 65)
    {
        printf("Good");

    } else if (grade >= 50)
    {
        printf("Weak");
    } else
    {
        printf("Fail");
    }


}
