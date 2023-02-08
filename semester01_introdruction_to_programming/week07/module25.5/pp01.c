#include<stdio.h>
int count(int x)
{

    int arr[x];
    for (int i=0; i<x;i++)
    {
        scanf("%d",&arr [i]);

    }
    int k;
    scanf("%d",&k);
int count=0;
    for (int i=0; i<x;i++)
    {
        if (arr[i]==k)
        continue;
        else
        count++;

    }
    return count;
}

int main()
{
    int a,result;
    scanf("%d",&a);
    result= count(a);
    printf("%d",result);
    return 0;

}
