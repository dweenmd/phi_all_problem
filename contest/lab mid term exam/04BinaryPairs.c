#include<stdio.h>
int main ()
{
    int t,i;
    scanf("%d",&t);
    char s[10000];
    while(t--){
            int len;
    scanf("%d",&len);
    scanf("%s",s);
    int count=0;

    for (i=0; i<len-1; i++) //101
    {
        if(s[i]=='0' && s[i+1]=='1')
        {
            count++;
        }
        else if (s[i]=='1'&& s[i+1]=='0')
        {
            count++;
        }
    }
    printf("%d",count);
 }
    return 0;
}
