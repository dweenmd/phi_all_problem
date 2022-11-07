#include<stdio.h>
int main()
{
    long n;
    long arr[100001];
    scanf("%ld",&n);
    for (long i=0;i<n;i++){
            scanf("%ld",&arr[i]);
    }

    for (long i=0;i<n;i++){
        int flag=0;
        if(arr[i]==0 || arr[i]==1){
        flag = 1;
        }
        for( long j =2; j<=arr[i]/2;j++){
        if(arr[i]%j==0)
            {
            flag=1;
            break;
            }
        }
    if(flag==1){
         printf("No\n");
    }
    else{
        printf("Yes\n");
    }
    }


    return 0;
}
