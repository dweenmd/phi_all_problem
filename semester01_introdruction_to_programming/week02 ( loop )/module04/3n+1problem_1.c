#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number::");
    scanf("%d",&a);
    printf("%d\n",a);
    while (a>1){
    
    if (a%2==0){
        a=a/2;
    }
    else {
        a=3*a+1;
    }
    printf("%d\n",a);
    
    }
}

