#include<stdio.h>
int main(){
    int n=6;
    int ara[n];
    int i;
     printf("Enter total 6 value\n:");
    for (i=0; i<n;i++){

        scanf("%d",&ara[i]);
    }
    int m=ara[0];
    int mi=ara[0];
    for(i=0;i<n;i++){
        if (ara[i]>m){
            m=ara[i];
        }
    if (ara[i]<mi){
            mi=ara[i];
        }
    }
    printf("maximum value is %d\n",m);
    printf("minimum value is %d\n",mi);

return 0;
}
