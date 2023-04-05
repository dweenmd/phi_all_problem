#include <stdio.h>
void cheakPrime(int arr[], int n)
{
    int count = 0;
    for (int j = 1; j <= n; j++)
    {
        int x = arr[j];
        int i, flag = 1;

        if (x == 0 || x == 1)
        {
            flag = 0;
        }

        for (i = 2; i < x / 2; i++)
        {
            if (x % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    printf("Prime numbers: %d", count);
}
void AvgOfEven(int arr[], int n)
{
    int sum = 0, count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
            count++;
        }
    }
    float avg = sum / count;
    printf("Average of all even integers:  %.2f", avg);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    cheakPrime(arr, n);
    printf("\n");
    AvgOfEven(arr, n);
    return 0;
}
