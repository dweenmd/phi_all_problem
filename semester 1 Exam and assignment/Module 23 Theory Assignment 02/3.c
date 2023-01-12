#include<stdio.h>
int main()
{
    long long int in[1000];
    int store1=0;
    int store7=0;
    int store9=0;
    scanf("%lld",&in);
    for (int i=0; i < '\0'; i++){
        if (in[i]==1){
            store1+=1;
        }
        else if (in[i]==7){
            store7+=1;
        }
        else if (in[i]==9){
            store9+=1;
        }
        else
            continue;
    }
    if (store1>0 && store7>0 && store9>0){
        printf("Yes\n");
    }
    else {
        printf("NO");
    }


    return 0;
}
