#include <stdio.h>
#include <math.h>
int isNiceArray(int n, int *arr)
{
    int *x;
    int r=ceil(n/2);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
         x = &arr[i];

        while (*x > 0)
        {
            if (*x % 10 == 7)
            {
                count++;
                break;
            }
            *x /= 10;
        }
    }

    if (count >= r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
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
    int r = isNiceArray(n, arr);

    if (r == 1)
    {
        printf("Beautiful");
    }

    else
    {
        printf("Ugly");
    }

}
