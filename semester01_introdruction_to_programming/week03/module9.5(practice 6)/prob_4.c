#include<stdio.h>
int main(){
   int  n,flag=0;
    int arr[10000];

    printf("\nEnter the number of inputs: ");
    scanf("%d",&n);
    printf("Enter your numbers:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n;i++){
    printf("%d-",arr[i]);
    for(int j=0;j<n;j++){
        if(i==j)
            continue;
        else
            printf("%d ",arr[j]);
    }
    printf("\n");
   }

return 0;
}


