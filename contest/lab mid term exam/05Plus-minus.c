#include<stdio.h>
int main ()
{
    int t,i,ecount=1,ncount=1;
    char s[10000];
    scanf("%d",&t);
    scanf("%s",s);
    int max=1;
    for (i=0; i<t-1; i++)
    {
        if(s[i]=='+' && s[i+1]=='+')
        {
            ecount++;
            if(max<ecount){
                 max=ecount;
            }

        }

        else if (s[i]=='-'&& s[i+1]=='-')
        {
            ncount++;
            if(max<ncount){
                max=ncount;
            }

        }
        else
        {
            ecount=1;
            ncount=1;
        }
    }


        printf("%d",max);



    return 0;
}
