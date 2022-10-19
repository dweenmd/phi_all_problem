#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number::");
    scanf("%d",&a);
    if(a%2==0){
        printf("It's an even number.");
    }
    else{
        printf("It's an odd number.");
    
    }
    return 0;
}