/*
#include <stdio.h>
int main()
{
int a,b,c;
a=2;
b=3;
c=1;
a+b=c; // semantic error
return 0;
}
*/

//*
#include <stdio.h>

int main()
{
    int n = 5;
    int i=1;
    int sum = 0;
    while(i>= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of numbers from 1 to %d is: %d", n, sum);
    return 0;
}

//*/
