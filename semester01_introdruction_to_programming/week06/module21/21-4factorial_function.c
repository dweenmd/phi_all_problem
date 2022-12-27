#include <stdio.h>
int factorial(int x)
{
    int res = 1;
    for (i = 1; i <= x; i++)
    {
        res *= i;
    }
    return res;
}
int main()
{
    int n, ans;
    scanf("%d", &n);
    ans = factorial(n);
    printf("Factorial = :%d \n", ans);
    return 0;
}