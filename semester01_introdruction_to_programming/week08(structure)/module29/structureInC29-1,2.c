#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    int a;
    struct Student s1= {12,"Dween mohammad",24,75.6};
    struct Student s2= {13,"Farhan Feroze",23,85.6};
    //jokhon sequence mone thakbe na
    struct Student s3={.weight =75.8, .roll=12, .age=24, .name="dween" };
    /* //or
     s.roll = 12;
     s.name="Dween mohammad";
     s.age = 23;
     s.weight = 75.6;
    */
    printf("student 1 info:\n");
    printf(" roll--> %d, \n name--> %s, \n age--> %d,\n weight-->%f,\n", s1.roll,s1.name,s1.age,s1.weight);
    printf("\n\nstudent 2 info:\n");
    printf(" roll--> %d, \n name--> %s, \n age--> %d,\n weight-->%f,\n", s2.roll,s2.name,s2.age,s2.weight);
    printf("\n\nstudent 3 info:\n");
        printf(" roll--> %d, \n name--> %s, \n age--> %d,\n weight-->%f,\n", s3.roll,s3.name,s3.age,s3.weight);
    a = 7;
    return 0;
}
