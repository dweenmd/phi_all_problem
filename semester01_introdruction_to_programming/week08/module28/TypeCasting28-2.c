#include<stdio.h>
/*
int main()
{
    int a =7;
    double b;
    char c='a';

    b=(double)25/4; //This is type casting , if we don't wrote (double) then it will not print the fraction value .. that's why we done type casting.

    printf("%d %lf %c",a,b,c);
    return 0;
}
*/
//for pointer type casting

int main()
{
    int a =7,*pi;
    double b=8.6,*pd;

    pi =&a;
    /* pd= &b; */
//double pointer er vitor integer pointer rakhle warning dey so --- jodi (double *) lekhi tobe kono somossa hoy na ,, that's call pointer type casting
    pd =(double *)pi;

    printf("%d %lf\n",a,b);
    printf("%p %p\n",pi,pd);

    return 0;
}