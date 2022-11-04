
#include<stdio.h>
int main()
{
    int n,x;
    int arr[200001];
    int i;
    scanf("%d",&n);
    for (i=1;i<n;i++){
            scanf("%d",&x);
            arr[x]=1;
    }
    for(i=1;i<n;i++){
        if(arr[i]==0)
        {
            printf("%d\n",i);

        break;
        }
    }

    return 0;
}

