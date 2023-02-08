#include <stdio.h>
int main()
{

    int num, flag = 0;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        flag = 1;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
<<<<<<< HEAD
            flag=1;
            b m nk



            jfhuryutyhghbdjhjer
=======
            flag = 1;
>>>>>>> 8f9b1fad3edde2f1b902f08f27040459090a9078
            break;
        }
    }

    if (flag == 1)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("prime number\n");
    }
}
