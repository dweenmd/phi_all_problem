#include<stdio.h>
int main()
{
    int a,b;//a=7;b=14
    scanf("%d %d",&a,&b);
    int i,gcd;
    for(i=1;i<=a;i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    int lcm=(a*b)/gcd;

    printf("Gcd is %d \n",gcd);
    printf("Lcm is %d \n",lcm);
    return 0;

}
