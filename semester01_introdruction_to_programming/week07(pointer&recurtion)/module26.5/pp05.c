#include <stdio.h>
void sum_of_which_last_digit_is_zero(int arr[], int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sum_of_which_last_digit_is_zero(arr, n);
    return 0;
}
void sum_of_which_last_digit_is_zero(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 10 == 0)
        {
            sum += arr[i];
        }
        else
            continue;
    }
    printf("%d",sum);
}