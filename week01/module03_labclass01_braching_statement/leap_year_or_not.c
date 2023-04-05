#include<stdio.h>
int main(){
    int a;
    printf("Enter a year::");
    scanf("%d",&a);
    if(a%4==0 && a%100!=0){
        printf("it's a LeapYear!");
    }
    else if(a%400==0){
        printf("it's a LeapYear!");
    }
    else {
        printf("it's not a LeapYear!");
    }
    return 0;
}
