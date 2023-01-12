// practice problem 05(22-5)
#include <stdio.h>
int gcd(int n, int m)
{
    int l, s, ans;
    if (m > n)
    {
        l = m;
        s = n;
    }
    else
    {
        l = n;
        s = m;
    }
    for (int i = 1; i < s; i++)
    {
        if (l % i == 0 && s % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int lcm(int m, int n)
{
    int i;
    for (i = m ;; i++)                       //  or lcm is
    {                                        // return (m*n)/gcd
        if (m % i == 0 && n % i == 0)
            return i;
    }
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("Gcd is %d\n", ans);
    int ans 2 = lcm(a, m);
    printf("Lcm is %d\n", ans 2);

    return 0;
}
