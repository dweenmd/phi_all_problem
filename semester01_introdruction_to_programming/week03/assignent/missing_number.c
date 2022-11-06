#include<stdio.h>
int main()
{
    long t,a,b,c, sum,d;
    scanf("%ld",&t);

    while(t--){
    scanf("%ld%ld%ld%ld",&sum,&a,&b,&c);
    d = sum-(a+b+c);
    printf("%ld\n",d);
    }}

