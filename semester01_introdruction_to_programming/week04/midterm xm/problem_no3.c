#include<stdio.h>
int main()
{
    int arr[15];
    int a,r=2,i;
    arr[0]=1;
    printf("%d",arr[0]);
    for (i=0;i<14 ;i++)
    {   a=arr[i];
        arr[i+1]=a*r;
        printf(" %d",arr[i+1]);
    }

    return 0;
}
