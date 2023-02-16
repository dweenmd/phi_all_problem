/*
You will be given a 3x3 matrix as input. You need to check whether the matrix is a magic square or not. Magic squares are the matrices which have equal sum along all rows, columns and diagonals. For example,

This is a magic square as you can see all the sums are equal to 15 along all the rows and columns and even the diagonals.
Now,Write a C Program to check the matrix is magic square or not.    

  Sample Input	 Sample Output
  
  2   7   6
  9   8   1         NO                                                                             
  4   3   5

  2   7   6
  9   5   1         YES                                                                                    
  4   3   8

*/
#include <stdio.h>
#include <string.h>
int main()
{
    int sumrow = 0, sumcol = 0, sumdig1 = 0, sumdig2 = 0, i, j, flag = 0;
    int arr[3][3];
    // enter matrix.....
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // print matrix......

    /* for (i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf ("%d  ",arr [i][j]);
         }
         printf("\n");
     } */
    // cheak diagonal
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sumdig1 = sumdig1 + arr[i][j];
            }
            if (i + j == 3 - 1)
            {
                sumdig2 = sumdig2 + arr[i][j];
            }
        }
    }

    if (sumdig1 != sumdig2)
    {
        flag = 1;
    }
    else
    {
        for (i = 0; i < 3; i++)
        {
            sumcol = sumrow = 0;

            for (j = 0; j < 3; j++)
            {
                sumcol = sumcol + arr[j][i];
                sumrow = sumrow + arr[i][j];
            }
            if (sumcol != sumdig1)
            {
                flag = 1;
            }
            else if (sumrow != sumdig1)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }

    if (flag == 0)
    {
        printf(" YES");
    }
    else
        printf(" NO");
    return 0;
}
