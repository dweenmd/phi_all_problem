#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char str[100], chTemp;
    int i, j, len;
    printf("Enter any string: ");
    gets(str);
    len = strlen(str);
    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(str[j]>str[j+1])
            {
                chTemp = str[j];
                str[j] = str[j+1];
                str[j+1] = chTemp;
            }
        }
    }
    printf("\nSame string in ascending order:\n%s", str);
    getch();
    return 0;
}