#include<stdio.h>
int main()
{

    int n,is_prime =0;
    printf("Enter a number:");
    scanf("%d", &n);

    if(n==0 || n==1)
    {
        is_prime = 1;
    }
    for( int i =2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            is_prime=1;
            break;
        }
    }

    if(is_prime==1)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("prime number\n");
    }


}
