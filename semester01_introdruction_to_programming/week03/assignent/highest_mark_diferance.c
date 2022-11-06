#include<stdio.h>
int main()
{
    int n,max=0;
    int arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n;i++){
        int dif=max-arr[i];
        printf("%d ",dif);

    }

return 0;
}

