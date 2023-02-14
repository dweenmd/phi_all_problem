#include <stdio.h>
float area_of_circle(float x);
float main()
{
    float n;
    scanf("%f",&n);
    printf("%f",area_of_circle(n));
    return 0;
}
float area_of_circle(float x)
{
    float area;
    area=(3.1416*(x*x));
    return area;
}
