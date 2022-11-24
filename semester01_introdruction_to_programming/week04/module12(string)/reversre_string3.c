#include<stdio.h>
int main()
{
    //https://www.youtube.com/watch?v=530jWnBMD2M
    int i,len=0;
    char s1[10000]="";
    printf("Enter string:");
    gets(s1);
    char temp;
    //s1 er length ber koro
     while(s1[i]!='\0')
     {
         i++;
         len++;
     }
     printf("length of strings is :%d\n",len);

     //s1 er man swap kore s2te reverse hisabe rakho

     for (i=0;i<len/2;i++)
     {
        temp=s1[i];
        s1[i]=s1[len-1-i];
        s1[len-1-i]=temp;
     }
     printf("%s\n",s1);


    return 0;
}
