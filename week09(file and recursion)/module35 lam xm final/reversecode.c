#include <stdio.h>
#include <string.h>

int main()
{
    int m;
    scanf("%d",&m);
    getchar();
    for (int k=0; k<m; k++)
    {
        int i;
        char str[100000];
        gets(str);
        int n=strlen(str);
        while (n--)
        {
            i=n;
            printf("%c",str[i]+16);
        }
        printf("\n");
    }

    return 0;
}
