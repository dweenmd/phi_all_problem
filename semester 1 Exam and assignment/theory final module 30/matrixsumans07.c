#include <stdio.h>
int main()
{
    int row, colm;
    scanf("%d %d", &row, &colm);

    int mat1[row][colm];
    int mat2[row][colm];
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            scanf("%d ", &mat1[i][j]);
        }
    }
    for (int k = 1; k <= row; k++)
    {
        for (int l = 1; l <= colm; l++)
        {
            scanf("%d ", &mat2[k][l]);
        }
    }
    printf("\n\nFirst matrix::\n");
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= colm; j++)
        {
            printf("  %d", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nsecond matrix::\n");
    for (int k = 1; k <= row; k++)
    {
        for (int l = 1; l <= colm; l++)
        {
            printf("  %d", mat2[k][l]);
        }
        printf("\n");
    }
}
