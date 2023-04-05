#include<stdio.h>
int main()
{
    char name[15]="Dween Mohammad";

    name[3]='i';

    name[14]='X';

    name[15]='\0';//this is null char

    printf("My name is %s", name);

 return 0;   
}
