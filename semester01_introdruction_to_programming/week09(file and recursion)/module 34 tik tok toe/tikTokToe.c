#include <stdio.h>
#include <stdbool.h>

void printcell(int a[][4], int n);
int isWin(int a[][4], int n);

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
    // player input
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
        // who is win? player 1 or player 2
        if (isWin(a, n) == 1)
        {
            printcell(a, n);
            printf("PLAYER 1 WON THE GAME!!!...\n");

            break;
        }
        else if (isWin(a, n) == 2)
        {
            printcell(a, n);
            printf("PLAYER 2 WON THE GAME!!!...\n");

            break;
        }
    }

    return 0;
}
// function of printing array
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
// is win cheaking function
int isWin(int a[][4], int n)
{
    // cheaking horizontal position
    for (int i = 1; i <= n; i++) // i = row
    {
        if (a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
        {
            return a[i][1];
        }
    }

    // cheaking verticale position
    for (int j = 1; j <= n; j++) // j is coloumn
    {
        if (a[1][j] == a[2][j] && a[2][j] == a[3][j] && a[1][j] != -1)
        {
            return a[1][j];
        }
    }
    // cheaking diagonal position
    if (a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1)
    {
        return a[1][1];
    }
    if (a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[3][1] != -1)
    {
        return a[1][3];
    }

    return -1;
}
