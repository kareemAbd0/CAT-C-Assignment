#include <stdio.h>

struct student {
    int id,data_structure_grade,programing_grade,discrete_math_grade,algorithms_grade;

};



int main() {
    int fast_id = 500,fast_data_structure_grade = 55,fast_programing_grade = 77 ,fast_discrete_math_grade = 71,fast_algorithms_grade = 80;
    int id;
   struct student students[10];

    for (int i = 0; i <10 ; ++i)
    {
   students[i].id =fast_id ;
   students[i].data_structure_grade = fast_data_structure_grade;
   students[i].programing_grade = fast_programing_grade;
   students[i].discrete_math_grade = fast_discrete_math_grade;
   students[i].algorithms_grade = fast_algorithms_grade;
   fast_id++;
   fast_data_structure_grade++;
   fast_programing_grade++;
   fast_discrete_math_grade++;
   fast_algorithms_grade++;
   }
    while (1)
    {

        printf("enter the ID for the student you want to show\n");
        scanf("%d",&id);

        int flag = 0;
        for (int i = 0; i < 10 ; ++i)
        {

            if (students[i].id == id)
            {
                int choice = 0;
                flag = 1;
                printf("student ID: %d\n",students[i].id);
                printf("data structure grade : %d\n",students[i].data_structure_grade);
                printf("programming grade: %d\n",students[i].programing_grade);
                printf("discrete math grade: %d\n",students[i].discrete_math_grade);
                printf("algorithms grade: %d\n \n",students[i].algorithms_grade);
                printf("do you want to change any grade? (1 for yes 2 for no)\n");
                scanf("%d",&choice);
                if(choice == 1)
                {
                    int choice2;
                    printf("enter 1 to change data structure grade 2 programming grade 3 discrete math grade 4 algorithms grade\n");
                    scanf("%d",&choice2);

                    switch (choice2)

                    {
                        case 1:
                            printf("enter the new grade\n");
                            scanf("%d",&students[i].data_structure_grade);
                            break;
                            case 2:
                                printf("enter the new grade\n");
                                scanf("%d",&students[i].programing_grade);
                                break;
                                case 3:
                                    printf("enter the new grade\n");
                                    scanf("%d",&students[i].discrete_math_grade);
                                    break;
                                    case 4:
                                        printf("enter the new grade\n");
                                        scanf("%d",&students[i].algorithms_grade);
                                        break;

                                        default:
                                            printf("enter a valid number\n");
                    }
                }
            }
        }
        if(flag == 0 )
        {
            printf("please enter a valid id\n");
        }
    }










    return 0;
}
