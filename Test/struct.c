#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    char id[10];
    int grades[6];
}Student;

int main(void)
{
    Student kevin;
    Student mark;

    strcpy(kevin.name, "Kevin");
    strcpy(kevin.id, "0085412");
    kevin.age = 40;
    kevin.grades[0] = 50;
    kevin.grades[1] = 80;
    kevin.grades[2] = 20;
    kevin.grades[3] = 90;
    kevin.grades[4] = 70;
    kevin.grades[5] = 85;

    strcpy(mark.name, "Mark");
    strcpy(mark.id, "0085459");
    mark.age = 38;
    mark.grades[0] = 50;
    mark.grades[1] = 80;
    mark.grades[2] = 20;
    mark.grades[3] = 90;
    mark.grades[4] = 70;
    mark.grades[5] = 85;

    // printf("Name is: %s\n", kevin.name);
    // printf("Id is : %s\n", kevin.id);
    // printf("Age: %d\n", kevin.age);

    // int val = sizeof(kevin.grades) / sizeof(kevin.grades[0]);

    // for (int i = 0; i < val; i++)
    // {
    //     printf("Grade is: %d\n", kevin.grades[i]);   
    // }

    Student People[2] = {mark, kevin};

    // int val = sizeof(People.grades) / sizeof(kevin.grades[0]);

    for (int j = 0; j < sizeof(People) / sizeof(People[0]); j++)
    {
        printf("Name is: %s\n", People[j].name);
        printf("Age is :%d\n", People[j].age);
        printf("ID is: %s\n", People[j].id);

        for (int i = 0; i < 6; i++)
        {
            printf("Grade is: %d\n", People[j].grades[i]);   
        }

        printf("\n");

    }
    

    return 0;
}

