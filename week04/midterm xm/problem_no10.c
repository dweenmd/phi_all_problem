#include<stdio.h>
int main()
{
    int a,remember,sum=0;
    scanf("%d",&a);
    while(a!=0){
        remember=a%10;
    sum=sum+remember;
        a=a/10;

    }

    printf("%d ",sum);

    return 0;
}