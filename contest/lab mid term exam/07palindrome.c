#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char s[21],sr[21];
    scanf("%d",&n);
    while(n--)
    {
        scanf("\n%s",s);
        int strsize = strlen(s);
        //strcpy(sr,s);
        //strrev(sr);

          // reverse 'str' and store in 'sr'

   int k=0;
        for (int i=strsize-1; i>=0; i--)
        {
        sr[k++] = s[i];
        }
        sr[k]='\0';


        // comparing string

        if ((strcmp(s, sr) == 0 )&& strsize<=7)
        {
            printf("Case #3: %s\n", s);
        }
        else if ((strcmp(s, sr) == 0 )&& strsize>7)
        {
            printf("Case #2: %c%d%c\n", s[0],strsize-2,s[0]);
        }
        else if (strcmp(s, sr) != 0)
        {
            printf("Case #1: Not Palindrome\n");
        }
    }
    return 0;
}
