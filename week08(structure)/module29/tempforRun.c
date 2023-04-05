#include <stdio.h>
struct Student
{
    int roll;
    int age;
    float weight;
};

int main()
{
    int a;
    struct Student s={12,24,75.6};
   /*
    s.roll = 12;
    s.age = 23;
    s.weight = 75.6;
   */
  printf(" roll--> %d, \n age--> %d,\n weight-->%f,\n", s.roll,s.age,s.weight);
    a = 7;
    return 0;
}
