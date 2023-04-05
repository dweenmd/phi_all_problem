#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        if(n%i==0 && i!=n){
            printf("%d, ", i);
        }
        if(i==n){
            printf("%d.",n);
        }
    }

}
