#include<stdio.h>
main(){
char str[]="Ibqqz!Cjsuiebz!Ojmpz{",*p;
p=str;
while(*p!='\0')
    --*p++;
printf("%s\n\n",str);
}
