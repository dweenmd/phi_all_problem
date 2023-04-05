#include<stdio.h>
int main()
{
    int y;
    scanf("%d", &y);
    
    if(y % 400 == 0) 
        printf("Yes");
    else if((y % 4 == 0) && (y % 100 != 0))
    printf("Yes");
    else
        printf("No");

    return 0;
}