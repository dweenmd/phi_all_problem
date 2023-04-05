#include<stdio.h>
int main()
{
    long long int a;
    printf("Enter a number::");
    scanf("%lld",&a);
    printf("%lld\n",a);
    while (a>1){

    if (a%2==0){
        a=a/2;
    }
    else {
        a=3*a+1;
    }
    printf("%lld\n",a);

    }
}

