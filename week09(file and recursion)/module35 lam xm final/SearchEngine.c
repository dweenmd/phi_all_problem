#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int j=1; j<=t; j++)
    {
        int n, a, i,flag =0;
        scanf("%d", &n);
        int arr[n];
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &a);
        for (i = 1; i <= n; i++)
        {
            if (arr[i] == a)
            {
                flag=1;
                printf("Case %d: %d",j, i);

            }
        }
        if(flag==0){
            printf("Case %d: Not Found",j);
        }
        printf("\n");
    }
}
