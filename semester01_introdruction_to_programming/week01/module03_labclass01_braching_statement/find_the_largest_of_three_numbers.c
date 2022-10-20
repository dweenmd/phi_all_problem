#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d", &a,&b,&c);
    if((a==b)&&(b==c)){
        printf("They are equal : %d %d %d",a,b,c);
    }
    else if((a>c)&&(a==b)){
        printf("%d & %d are the largest number.",a,b);
    }
    else if((a>b)&&(a==c)){
        printf("%d & %d are the largest number.",a,c);
    }
    else if((b>a)&&(b==c)){
        printf("%d & %d are the largest number.",b,c);
    }
    else if(a>b && a>c){
        printf("The largest number is : %d",a);
    }
    else if (b>c){
        printf("The largest number is : %d",b);
    }
    else {
    printf("The largest number is : %d",c);
    }
    return 0;
}
