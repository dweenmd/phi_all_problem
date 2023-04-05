#include <stdio.h>
void Asorting(int arr[], int n)
{
    int i, j;
    int *xp, *yp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                xp = &arr[j];
                yp = &arr[j + 1];

                int temp = *xp;
                *xp = *yp;
                *yp = temp;
            }
    }
}
void Dsorting(int arr[], int n)
{
    int i, j;
    int *xp, *yp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] < arr[j + 1])
            {
                xp = &arr[j];
                yp = &arr[j + 1];

                int temp = *xp;
                *xp = *yp;
                *yp = temp;
            }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    Asorting(arr1, n);
    Dsorting(arr2, n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr1[i] - arr2[i]);
    }
    printArray(arr, n);

    return 0;
}