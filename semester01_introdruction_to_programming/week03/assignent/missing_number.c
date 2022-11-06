
#include<stdio.h>
int main()
{
    long n,sum1,sum2=0;
    long arr[500001];
    long i;
    scanf("%ld",&n);
    sum1=n*(n+1)/2;
    for (i=0;i<n-1;i++){
            scanf("%ld",&arr[i]);
     }
     for (i=0;i<n-1;i++){
        sum2=sum2+arr[i];
     }
    int y=sum1-sum2;
    printf("%ld",y);


     return 0;
}

