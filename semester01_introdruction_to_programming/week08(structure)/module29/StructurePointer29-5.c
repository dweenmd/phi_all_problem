#include<stdio.h>
struct student
{
    double weight;
    int roll;
    int age;
};
int main()
{
    struct student s= {.roll=12,.weight =85.2,.age=24};
    struct student s2= {.roll=13,.weight =83.2};
    struct student *sp;
    sp=&s;

    printf("%d\n",sizeof(struct student));
    printf("pointer location \n%p\n%p",sp,&s2);

    //jodi pointer use kore structure print korte hoy tahole vinno poddoti obolombon korte hobe

    printf("\nprint structure with pointer,\n roll --> %d \n weight --> %lf \n age-->%d",sp->roll,sp->weight, sp->age);
    return 0;
}
