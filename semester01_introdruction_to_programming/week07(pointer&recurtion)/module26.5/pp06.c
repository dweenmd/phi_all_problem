#include<stdio.h>
#include<string.h>
void implement(char str[])
{
    int i ;
    for (i=0;i<strlen(str);i++){
        if (str[i]%2==0){
            str[i]-=32;
        }
        else {
            str[i]=str[i];
        }
    }
    printf("\n%s",str);

}

int main()
{
    char str[100];

    scanf("%s",str);

    implement(str);


}

