#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        arr[str[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }
    printf("%d",count);
}
