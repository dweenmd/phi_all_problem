//a jodi even hoy tobe a/2 & odd hole 3*a+1
//While loop er bebohae
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number::");
    scanf("%d",&a);
    while (a!=1){
    if (a%2==0){
        a=a/2;
        printf("%d\n",a);
    }
    else {
        a=3*a+1;
        printf("%d\n",a);
    }

    }
}
