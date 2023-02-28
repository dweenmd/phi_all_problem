#include<stdio.h>
#include<string.h>

struct Student
{
    double weight;
    int roll;
};
int main()
{
    struct Student s[10];

    /* s[0].roll=11;
    s[0].weight =55.9;

    s[1].roll=12;
    s[1].weight = 75.9;

    s[2].roll=13;
    s[2].weight = 56.9;

    s[3].roll=14;
    s[3].weight = 67.9; */

    //or
    for (int i =0 ; i<10 ; i++)
    {
        s[i].roll=11+i;
        s[i].weight=55.76+i*3.78;
    }
    for (int i=0; i<10 ; i++)
    {
        printf("roll--> %d , Weight--> %lf \n",s[i].roll, s[i].weight);
    }


    return 0;
}
