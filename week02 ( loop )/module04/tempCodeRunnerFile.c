#include<stdio.h>
int main(){
    int i,sum=0;
    printf("Entetr N term of number:");
    scanf("%d",&i);
    while(i>0){
        printf("The first %d natural number is : %d ",i);
        sum=sum+i;
        i--;
    }
    printf("The Sum of Natural Number upto %d terms : %d",i,sum);
}
