#include <stdio.h>
int factorial(int x)
{
    int i, res = 1;
    for (i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{
    int n, ans;
    printf("Enter a value : ");
    scanf("%d", &n);
    ans = factorial(n);
    printf("Factorial = %d \n", ans);
    return 0;
}