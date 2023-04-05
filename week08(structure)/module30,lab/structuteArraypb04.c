// https://phitron.io/ph232/video/ph232-30-4-practice-problem-4
#include <stdio.h>
struct student
{
    int roll;
    char name[50];
    double marks;
};
void print_student (int n,struct student s ){
    printf("\nInformtion of student %d\n", n);
        printf("Roll--> %d\n", s.roll);
        printf("Name--> %s\n", s.name);
        printf("Marks--> %.2lf", s.marks);
}

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
    for (i = 1; i <= 5; i++)
    {
        print_student(i,class[i]);
    }
    return 0;
}
