#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number:: ");
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("Numbers are equal");
    }
    else{
        printf("Numbers are not equal.\n");
    }
    return 0;
}