#include<stdio.h>
int isPrime(int x)
{
    int i;
    for (i=2; i<x; i++)
    {
        if (x%i==0)
            return 0;
    }
    return 1;
}
int main ()
{
    int n;
    scanf("%d",&n);
    if (isPrime(n)==1)
    {
        printf("prime number\n");

    }
    else
        printf("composite number \n");

    return 0;
}
