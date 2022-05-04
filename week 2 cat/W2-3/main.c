#include <stdio.h>

int main() {
    int ID;
    printf("Enter your ID :\n");
    scanf("%d",&ID);

    switch (ID) {
        case 1234:
            printf("Harry");
            break;
        case 5678:
            printf("Ron");
            break;
        case 1145:
            printf("Hermione");
            break;
        default:
            printf("Wrong ID");
    }
}
