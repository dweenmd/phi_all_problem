#include<stdio.h>
int is_leap_year(int y)
{
    if ((y%400==0)||(y%4==0)&&(y%100!=0))
    return 1;
    else
    return 0;
}
int digit_district(int n){
    int ld;
    int count_digit[10]={0,0,0,0,0,0,0,0,0,0,};
    while (n>0){
        ld=n%10;
        count_digit[ld]++;
        n/=10;
    }
    int i;
    for (i=0; i<10;i++){
        printf("%d--> %d\n",i,count_digit[i]);
    }
}
int main()
{
    int n;
    printf("Enter a year:");
    scanf("%d",n);
    is_leap_year(n);
    digit_district(n);
     return 0;
}
