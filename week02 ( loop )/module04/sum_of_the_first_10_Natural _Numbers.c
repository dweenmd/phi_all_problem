#include<stdio.h>
int main(){
    int i, sum=0;
    for(i=1;i<=10;i++){
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("the sum is: %d\n",sum);
}
