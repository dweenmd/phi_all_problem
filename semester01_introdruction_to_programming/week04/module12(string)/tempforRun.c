#include<stdio.h>
int main()   //now we learn how to compare two string
{
    char str1[]="dween mohammad";
    char str2[]="dween";

    //strcmp is for compare two strings
    int d=strcmp(str1,str2);//when strings are same value of strcmp is 0
    if(d==0){
        printf ("string are equal");
    }
    else
    printf("strings are not equal");


    return 0;
}