#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n+1];
    int j=0;
    for(int i=1; i<=n; i++){
        if (i%2==0){
            arr[j]=i;
            j++;
        }

    }
    for(int i=1; i<=n; i++){
        if (i%2!=0){
            arr[j]=i;
            j++;
        }

    }
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    printf("\nThe %dth element in this sequence is %d.",k,arr[k-1]);

return 0;
}
