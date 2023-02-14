#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p;
    
    for(int i=0; i<n;i++){
        p=&arr[i];
        printf("%d ",*p);
    }
    return 0;
}