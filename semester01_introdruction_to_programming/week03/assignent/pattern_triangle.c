#include <stdio.h>
int main()
{
    // declare the local variables
    int i, j, rows, k;
    printf (" Enter a number to define the rows: \n ");
    scanf("%d", &rows);
    printf("\n");
    for (i = 1; i <= rows; i++)
    {
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" %d", k);
        }
        printf ("\n");
    }
return 0;
}
