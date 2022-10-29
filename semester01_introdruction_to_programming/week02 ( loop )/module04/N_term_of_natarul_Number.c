#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Entetr N term of number:");
    scanf("%d",&n);
    printf("The first %d natural number is :",n);
    while(i<=n){
        printf(" %d",i);
        sum=sum+i;
        i++;
        }

    printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);
}
