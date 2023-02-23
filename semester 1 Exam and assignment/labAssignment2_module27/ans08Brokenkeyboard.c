#include <stdio.h>
#include <string.h>
// void BK(char str[],int n);
void main()
{
    char str[100];
    scanf("%s",str);
    int n = strlen(str);
    for (int i=0;i<n;i++)
    {
        str[i]=str[i]+1;
        printf("%c",str[i]);
    }
}