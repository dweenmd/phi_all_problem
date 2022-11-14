#include<stdio.h>
#include<string.h>
int main(){

    char name[100]={'a','b','c','\0'};
    char name1[100]="Rafiboss";
    char name2[]=" Google";
    char getName[10];

 //   for(int i=0;name[i]!='\0';i++){
   //     printf("%c ",name[i]);
    //}

    //inputs:
    //scanf("%s",&getName);
    //gets(getName); // Buffer overflow bug
    //fgets(getName,10,stdin); // Standard read string input

   /*outputs:
    puts(getName);
    fputs(getName,stdout);
    printf("\n%s",getName);
    */
    printf("%s",(name1));
    printf("\n%s",name1);
}



