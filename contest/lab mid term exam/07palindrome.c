#include<stdio.h>
#include<string.h>
int main(){
    int n;
    char s[21],sr[21];
    scanf("%d",&n);
    while(n--)
    {
        scanf("\n%s",s);
        int strsize = strlen(s);
        //printf("%d",strsize);
        // reverse 'str' and store in 'sr'

        for (int i=strsize-1; i>=0; i--)
        {
        sr[strsize-1-i] = s[i];
        }

    // comparing string

    if ((strcmp(s, sr) == 0 )&& strsize<=7) {
        printf("%s\n", s);
    }
    else if ((strcmp(s, sr) == 0 )&& strsize>7) {
        printf("%c%d%c\n", s[0],strsize-3,s[0]);
    }
    else if (strcmp(s, sr) != 0){
        printf(" Not Palindrome\n");



    }

    }

return 0;
}
