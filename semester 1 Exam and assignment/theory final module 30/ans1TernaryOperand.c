#include <stdio.h>
int main()
{
    int a = 2, b = 3, maxNum;
    maxNum = a >= b ? a : b;

    printf("Max num is %d", maxNum);

    return 0;
}
