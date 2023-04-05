#include <stdio.h>
int sum_of_digit(int n);
int is_prime(int x);
int main()
{
    int n,m;
    scanf("%d", &n);
//    m=sum_of_digit(n);
//    printf("%d ",m);
    if (is_prime(sum_of_digit(n)) == 1)
    {
        printf("The sum of digit is prime..");
    }
    else
    {
        printf("sum of digit is not prime .");
    }
    return 0;
}
int sum_of_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int is_prime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
