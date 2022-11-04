#include<stdio.h>
int main(){
    int i,n;
    int arr[10000];

    printf("\nEnter the number of inputs: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--){
            printf("%d",arr[i]);

    }

return 0;
}

