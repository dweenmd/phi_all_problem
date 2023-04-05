#include<stdio.h>
int main()
{
    int a=5;
    int* p;
    int* q;
    p= &a;
    q=p;
    *q = 13;
    printf("%d\n", a);
    return 0;
}