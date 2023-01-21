#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 0; i < 4; i++)
    {
        if (i == i / 2)
        {
            sum -= pow(i, 2);
        }
        printf("The sum even is %d \n", sum);
        else sum += pow(i, 2);

        printf("The sum 2 is %d \n", sum);
    }
    printf("The sum is %d ", sum);
    return 0;
}
