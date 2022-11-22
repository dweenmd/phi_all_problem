#include<stdio.h>
int main()
{
    int m;
    scanf("%d", &m);
    while(m>0){
        char s[1000];
        scanf("%d",s);
        fgets(s,sizeof(s),stdin);
        printf("%s",s);
    m--;
    }
    return 0;
}