#include <stdio.h>
int main()
{
    int a, b, n;
    a = 0;
    b = 1;
    scanf("%d", &n);
    printf("%d, %d", a, b);
    for (int i = 3; i <= n; i++)
    {
        int sum = 0;
        sum = a + b;
        printf(", %d", sum);
        a = b;
        b = sum;
    }

    return 0;
}
