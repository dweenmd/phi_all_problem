#include <stdio.h>
#include <string.h>
void BrokenKyebord(char temp[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c%c", temp[i], temp[i]);
        }
        else
            printf("%c", temp[i]);
    }
}
void main()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    char temp[n + 1];
    for (int i = 0; i <= n; i++)
    {
        temp[1 + i] = str[i];
    }

    BrokenKyebord(temp, n);
}