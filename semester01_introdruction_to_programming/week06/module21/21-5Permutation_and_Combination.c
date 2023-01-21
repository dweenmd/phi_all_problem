#include <stdio.h>
#include <math.h>
int factorial(int x);
int main()
{
    int n, r;
    printf("Enter 'n' and 'r' = ");
    scanf("%d %d", &n, &r);

    int permutation, combination;

    permutation = factorial(n) / factorial(n - r);

    combination = factorial(n) / (factorial(n - r) * factorial(r));

    printf("nPr = %d\n", permutation);
    printf("ncr = %d", combination);
    
    return 0;
}

int factorial(int x)
{
    int i, res = 1;
    for (i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}