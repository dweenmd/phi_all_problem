#include <stdio.h>
#include <stdbool.h>

void printcell(int dween[][4], int n);
int isWin(int dween[][4], int n);

int main()
{
    int n = 3;
    int dween[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dween[i][j] = -1;
        }
    }
    // player input
    bool player1 = true;
    bool player2 = false;
    while (true)
    {
        printcell(dween, n);
        if (player1 == true)
        {
            int r, c;
        flag:
            printf("Player 1 Turn(X), Enter row  and coloumn:");
            scanf("%d %d", &r, &c);
            if (dween[r][c] != -1)
            {
                printf("\nInvalid Cell, again try\n");
                goto flag;
            }
            dween[r][c] = 1;
            player1 = false;
            player2 = true;
        }
        else
        {
            int r, c;
        flag2:
            printf("Player 2 Turn(0), Enter row  and coloumn:");
            scanf("%d %d", &r, &c);
            if (dween[r][c] != -1)
            {
                printf("\nInvalid Cell, again try\n");
                goto flag2;
            }
            dween[r][c] = 2;
            player2 = false;
            player1 = true;
        }
        // who is win? player 1 or player 2
        if (isWin(dween, n) == 1)
        {
            printcell(dween, n);
            printf("PLAYER 1 WON THE GAME!!!...\n");

            break;
        }
        else if (isWin(dween, n) == 2)
        {
            printcell(dween, n);
            printf("PLAYER 2 WON THE GAME!!!...\n");

            break;
        }
    }

    return 0;
}
// function of printing array
void printcell(int dween[][4], int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dween[i][j] == -1)
                printf(" ");
            if (dween[i][j] == 1)
                printf("X");
            if (dween[i][j] == 2)
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
int isWin(int dween[][4], int n)
{
    // cheaking horizontal position
    for (int i = 1; i <= n; i++) // i = row
    {
        if (dween[i][1] == dween[i][2] && dween[i][2] == dween[i][3] && dween[i][1] != -1)
        {
            return dween[i][1];
        }
    }

    // cheaking verticale position
    for (int j = 1; j <= n; j++) // j is coloumn
    {
        if (dween[1][j] == dween[2][j] && dween[2][j] == dween[3][j] && dween[1][j] != -1)
        {
            return dween[1][j];
        }
    }
    // cheaking diagonal position
    if (dween[1][1] == dween[2][2] && dween[2][2] == dween[3][3] && dween[1][1] != -1)
    {
        return dween[1][1];
    }
    if (dween[1][3] == dween[2][2] && dween[2][2] == dween[3][1] && dween[3][1] != -1)
    {
        return dween[1][3];
    }

    return -1;
}
