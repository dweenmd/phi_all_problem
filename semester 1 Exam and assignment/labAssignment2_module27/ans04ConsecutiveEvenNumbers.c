#include <stdio.h>
void consecutive_even(int n)
{
    int x;
    x = (n / 4) - 5;
    for (int i = 2; i < 9; i += 2)
    {
        printf("%d ", x + i);
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        consecutive_even(n);
        printf("\n");
    }
    return 0;
}