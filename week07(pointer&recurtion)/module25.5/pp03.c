#include <stdio.h>
#include <string.h>
#include <math.h>
int cheak_pow_of_two(int x);
int main()
{
    char string[100];
    int i = 0, value, sum = 0;
    printf("Enter the Sentenc: ");
    gets(string);
    while (string[i] != '\0')
    {
        string[i] = string[i] - 96;
        sum = sum + string[i];
        i++;
    }
    // printf("%d\n",sum);
    // getch();
    if (cheak_pow_of_two(sum) == 1)
    {
        printf("Yes\n");
        int count = 1;
        for (i = 0; i < sum; i++)
        {
            if (sum == 1)
            {
                break;
            }
            sum = sum / 2;
            count++;
        }
        printf("cost=2^%d", count);
    }
    else
        printf("No");
    return 0;
}
int cheak_pow_of_two(int n)
{
    if (n == 0)
        return 0;
    while (n != 1)
    {
        if (n % 2 != 0)
            return 0;
        n = n / 2;
    }
    return 1;
}