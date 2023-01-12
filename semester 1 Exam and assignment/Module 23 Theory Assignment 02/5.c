#include<stdio.h>
int add_three_nums(int a, int b, int c)
{
    return a+b+c;
}

int main()
{
    int n,x,y,sum;
    scanf("%d %d %d",&n,&x,&y);
    sum=add_three_nums(n,x,y);

    printf("Sum of Three Number is %d",sum);


    return 0;
}
