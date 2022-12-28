/*dweens number
    condition
    1) 7 must be present
    2) digit summetion more than 10
    3) last digit prime
*/
#include <stdio.h>
#include <math.h>
int seven_present(int n);
int digit_sum(int n);
int last_digit_prime(int n);

int main()
{
    int n;
    scanf("%d", &n);
    if (seven_present(n) == 1 && digit_sum(n) > 10 && last_digit_prime(n) == 1)
    {
        printf("Dween's Number \n");
    }
    else
        printf("No\n");
    return 0;
}

int seven_present(int n)
{
    while (n > 0)
    {
        if (n % 10 == 7)
            return 1;
        n /= 10;
    }
    return 0;
}
int digit_sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
int last_digit_prime(int n)
{
    int ld = n % 10;
    if (ld == 2 || ld == 3 || ld == 5 || ld == 7)
        return 1;
    else
        return 0;
}