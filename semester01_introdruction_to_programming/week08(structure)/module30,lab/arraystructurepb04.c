// https://phitron.io/ph232/video/ph232-30-4-practice-problem-4
#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    double marks;
};

int main()
{
    int i;
    struct student class[5];

    for (i = 0; i < 5; i++)
    {
        printf("%d) Enter roll, name & marks: \n", i+1);
        scanf("%d", &class[i].roll);
        scanf("%s", class[i].name);
        scanf("%lf", &class[i].marks);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Informtion of student %d\n", i+1);
        printf("Roll--> %d\n", class[i].roll);
        scanf("Name--> %s\n", class[i].name);
        scanf("Marks--> %.2lf", class[i].marks);
    }
    return 0;
}