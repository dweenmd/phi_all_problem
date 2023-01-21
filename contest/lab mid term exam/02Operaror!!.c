#include<stdio.h>
#include<string.h>
int main(){
    char s1[20];
    int a,b,i=0 ,add, mul, sum=0;
    scanf("%s",s1);
    scanf("%d%d",&a,&b);

    while (s1[i]!='\0')
    {
        if(s1[i]=='+'){
            add=a+b;
            sum=sum+add;
        }
        else if(s1[i]=='*'){
            mul=a*b;
            sum=sum+mul;
        }
        i++;
    }
    printf("%d",sum);
}