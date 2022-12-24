#include<stdio.h>
int main()
{
    int i , sum=0 ;
    for (i=0;i<5;i++){
        if (i==i/2){
            sum-=pow(i,2);
        }
        else
        sum+=pow(i,2);

    }
    printf("The sum is %d ", sum);
}