#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        for (int num = l; num <= r; num++)
        {
            if (num == 1)
                printf("1 ");
            if (num > 1)
            {
                int flag = 0;
                for (int j = 2; j <= num / 2; j++)
                {
                    if (num % j == 0)
                    {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0)

                    printf("%d ", num);
            }
        }
        printf("\n");
    }
    return 0;
}
