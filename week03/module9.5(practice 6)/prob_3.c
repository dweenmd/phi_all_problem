#include<stdio.h>
int main(){
    int i,n,flag=0;
    int arr[10000];

    printf("\nEnter the number of inputs: ");
    scanf("%d",&n);
    printf("Enter your numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
                if(arr[0]!=arr[i]){
                    flag=1;
                    break;
                }
    }
    if(flag==1){
        printf("No");
    }
    else{
        printf("Yes");
    }

return 0;
}

