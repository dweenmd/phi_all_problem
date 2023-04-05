#include<stdio.h>
int main()
{
    long n,k;
    long roll[100001];
    scanf("%ld",&n);
    for(int i=0;i<n;i++){
        scanf("%ld",&roll[i]);
    }
    scanf("%ld",&k);
    for(int i=k;i<n;i++){ //Boys
        printf("%ld ",roll[i]);
    }
    for(int i=0;i<k;i++){ //Girls
        printf("%ld ",roll[i]);
    }
    return 0;
}

