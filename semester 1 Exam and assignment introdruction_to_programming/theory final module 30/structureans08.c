#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    printf("Enter Name :");
    scanf("%s", &s.name);
    printf("Enter Roll Number:");
    scanf("%d", &s.roll);
    printf("Enter marks:");
    scanf("%f", &s.marks);
    printf(" Name: %s \n Roll number: %d\n Marks:%.1f\n", s.name, s.roll, s.marks);
    return 0;
}
