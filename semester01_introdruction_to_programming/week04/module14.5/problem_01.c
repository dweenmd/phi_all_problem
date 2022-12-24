#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]; // Input/source string
    char str[1000];//Destination String
    int m;
    scanf("%d", &m);
    int i=0;
    while(m--){
        int j=0;
        scanf("%s",s);
        int length=strlen(s);
        while(length!=0){
            str[i]=s[j];
            i++;
            j++;
            length--;
        }
        str[i++]=' ';

    }
    printf("%s",str);
    return 0;
}
