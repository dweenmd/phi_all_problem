#include<stdio.h>
int main()
{
    int n,w,i,sum=0;
    printf("Enter a number:: ");
    scanf("%d",&n);

    for  (i=1;i<=n;i++){
            scanf("%d",&w);
            sum=sum+w;

    }
    printf("Total sum of weights: %d",sum);
    return 0;
}
