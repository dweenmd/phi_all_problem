#include <stdio.h>
void sumofEvenEvenOddOdd(int arr[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int dween[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &dween[i]);
    }
   sumofEvenEvenOddOdd(dween,n);

    return 0;
}
void sumofEvenEvenOddOdd(int dween[], int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((dween[i] % 2 == 0) && (i % 2 == 0))
        {
            sum = sum + dween[i] + i;
        }
        else if ((dween[i] % 2 != 0) && (i % 2 != 0))
        {
            sum = sum + dween[i] + i;
        }
    }
    printf("%d", sum);
}