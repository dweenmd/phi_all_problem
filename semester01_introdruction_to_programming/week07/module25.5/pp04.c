#include<stdio.h>
void implement(int n);
int main()
{
    int n;
    scanf("%d",&n);
    implement(n);
    return 0;
}
void implement(int n)
{
    if (n<1)
    return;
    else{
        printf("%d ",n);
        implement(n-1);
    }
}