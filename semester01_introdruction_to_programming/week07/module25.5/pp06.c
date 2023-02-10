#include<stdio.h>
int main(){
    int x,y,z,sum;
    int *px,*py,*pz;
    printf("Enter Three Number:");
    scanf("%d %d %d",&x,&y,&z);
    px=&x;
    py=&y;
    pz=&z;
    sum=*px+*py+*pz;
    printf("%d",sum);
    return 0;
}