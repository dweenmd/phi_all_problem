#include<stdio.h>
int main ()
{
    int t,i,ecount=1,ncount=1;
    char s [101];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s",&s[i]);

    }
    for (i=0;i<t ;i++)
    {
        if(s[i]=='+' && s[i+1]=='+'){
            ecount++;
        }

        else if (s[i]=='-'&& s[i+1]=='-'){
            ncount++;
        }
    }
    if(ecount > ncount){
        printf("%d", ecount);

    } else if(ncount > ecount){
        printf("%d", ncount);
    } else {
        printf("0");
    }
    return 0;
}