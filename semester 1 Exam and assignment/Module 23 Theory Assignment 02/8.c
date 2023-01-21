#include<stdio.h>
int main()
{
    char word[100];
    int n;

    scanf("%s",word);
    scanf("%d",&n);
    int i=0;
    while(word[i]!='\0'){
        int a=(word[i]+n);
        if(a<=122){
            printf("%c",a);
        }
        else{

            printf("%c",(a%122)+96);
        }
        i++;
    }

    return 0;
}
