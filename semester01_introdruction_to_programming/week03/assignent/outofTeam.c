#include<stdio.h>
int main(){
    int n,min_run,count=0;
    int arr[1000];
     scanf ("%d %d",&n,&min_run);
    for(int i=0; i<n;i++){
        scanf("%d",&arr[i]);

    }
    for(int i=0; i<n;i++){
            if (min_run>arr[i]){
                count++;
            }
    }

    printf("%d",count);

    return 0;
}
