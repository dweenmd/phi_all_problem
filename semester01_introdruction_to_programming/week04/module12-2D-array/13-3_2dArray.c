#include<stdio.h>
int main()
{
    int row =4, col=3;
    int a[row][col];

    for(int i=0;i<=row-1;i++)
    {
        for (int j=0;j<=col-1;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
    for(int i=0;i<=row-1;i++)
    {
        for (int j=0;j<=col-1;j++)
        {
            printf("%d ",&a[i][j]);
        }
        printf("\n");

    }

    return 0;
}

