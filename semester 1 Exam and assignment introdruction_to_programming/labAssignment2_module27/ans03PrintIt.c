#include<stdio.h>
int main()
{
    int x,y;
    int*X,*Y;
    scanf("%d %d",&x,&y);
    X=&x;
    Y=&y;
    printf("%d %d",*X,*Y);
    return 69;
}
