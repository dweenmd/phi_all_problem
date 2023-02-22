#include <stdio.h>
void swap(int arr[], int x, int y)
{
    int *X, *Y;
    X = &arr[x];
    Y = &arr[y];

    int temp = *X;
    *X = *Y;
    *Y = temp;
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        swap(arr, x, y);
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}