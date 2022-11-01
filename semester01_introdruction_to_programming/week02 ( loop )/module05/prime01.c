#include<stdio.h>
int main(){
    int n,i=2;
    scanf("%d",&n);
    for(i;i<n;i++){
        if(n%i==0){
        printf("Composite");
        break;
        }
    }
    if(i==n){
        printf("prime");
    }

return 0;
}
