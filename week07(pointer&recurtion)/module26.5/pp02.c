#include <stdio.h>
void bubble_sorting(int arr[], int n);
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // change the array with bubble sort

    bubble_sorting(arr, n);

    // print the sorting array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}
void bubble_sorting(int arr[], int n)
{
    int i, j;
    int *x, *y;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                x = &arr[j];
                y = &arr[j + 1];

                int temp = *x;
                *x = *y;
                *y = temp;
            }
        }
    }
  
}