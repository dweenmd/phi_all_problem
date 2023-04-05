#include <stdio.h>
int find_dween(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] % 3 == 0) || (arr[i] % 5 == 0))
            count++;
    }
    if (count > 0)
    {
        return count;
    }

    else
        return -1;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d", find_dween(arr, n));
    return 0;
}