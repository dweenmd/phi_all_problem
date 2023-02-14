#include <stdio.h>
int main()
{
    float n;
    scanf("%lf",&n);
    area_of_circle(n);
    return 0;
}
float area_of_circle(int x)
{
    int area;
    area=(3.1416*(x^2));
    return area;
}