#include <stdio.h>
int main()
{
    int row, colm;
    scanf("%d %d", &row, &colm);

    int mat1[row][colm];
    int mat2[row][colm];
    int mat3[row][colm];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < colm; l++)
        {
            scanf("%d", &mat2[k][l]);
        }
    }
    printf("\n\nFirst matrix::\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            printf("  %d", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n\nsecond matrix::\n");
    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < colm; l++)
        {
            printf("  %d", mat2[k][l]);
        }
        printf("\n");
    }

    printf("\n\n sum of two matrix");

    for (int k = 0; k < row; k++)
    {
        for (int l = 0; l < colm; l++)
        {
            printf("  %d", mat1[k][l]+mat2[k][l]);
        }
        printf("\n");
    }
}
