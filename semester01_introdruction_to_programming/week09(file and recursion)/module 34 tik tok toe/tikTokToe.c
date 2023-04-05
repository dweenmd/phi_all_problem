#include <stdio.h>
#include <stdbool.h>

void printcell(int a[][4], int n);
int main()
{
    int n = 3;
    int a[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = -1;
        }
    }

    bool player1 = true;
    bool player2 = false;
    while (true)
    {
        printcell(a, n);
        if (player1 == true)
        {
            int r, c;
            flag:
            printf("Player 1 Turn(X), Enter row  and coloumn:");
            scanf("%d %d", &r, &c);
            if (a[r][c] != -1)
            {
                printf("\nInvalid Cell, again try\n");
                goto flag;
            }
            a[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
            flag2:
            printf("Player 2 Turn(0), Enter row  and coloumn:");
            scanf("%d %d", &r, &c);
            if (a[r][c] != -1)
            {
                printf("\nInvalid Cell, again try\n");
                goto flag2;
            }
            a[r][c] = 2;
            player2 = false;
            player1 = true;
        }
    }

    return 0;
}

void printcell(int a[][4], int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == -1)
                printf(" ");
            if (a[i][j] == 1)
                printf("X");
            if (a[i][j] == 2)
                printf("0");
            if (j < n)
                printf("\t|\t");
        }
        printf("\n");
        if (i < n)
            printf("-----------------------------------");
        printf("\n");
    }
}
