
#include<stdio.h>
void isPrime(int x)
{
    int i,flag=1;
    if (x==0||x==1)
    {
        flag=0;
    }
    for (i=2; i<x/2; i++)
    {
        if (x%i==0)
        {
            flag=0;
            break;
        }
    }
    if (flag==1)
        printf("prime number \n");
    else printf("composite number \n");
}
int main()
{
    int n;
    scanf("%d",&n);
    isPrime(n);
    return 0;
}
