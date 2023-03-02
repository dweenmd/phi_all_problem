#include<stdio.h>

int main()
{
    float a,b,avg;
    scanf("%f %f",&a,&b);
    float *n,*m;
    n=&a;
    m=&b;

    avg=(*n+*m)/2;
    printf("%.2f",avg);

    return 0;
}