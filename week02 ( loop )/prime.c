#include<stdio.h>
#include<math.h>

int main(){
    int n,i=2;
    int flag=0;
    scanf("%d",&n);
    for(i;i<=sqrt(n);i++){
        if(n%i==0){
        flag=1;
        }
    }
    if(flag==1){
        printf("Not prime");
    }
    else{
       printf("prime");
    }

return 0;
}
