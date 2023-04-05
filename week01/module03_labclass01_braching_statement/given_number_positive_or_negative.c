#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number::");
    scanf("%d",&a);
    if(a>0){
        printf("It's a positive number.");
    }
    else if (a==0){
        printf("The number is ZERO means Not Positive!");
    }
    else {
        printf("It's a Negative number!");
    }
    return 0;
}