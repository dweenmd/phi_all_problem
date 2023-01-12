
#include<stdio.h>
int main()
{
    int i =0;
   char in[100];
   gets(in);

   while (in[i]!='\0' ){
    if (in[i]>=65 && in[i]<=90)
        in[i]=in[i]+32;
    else
        in[i]-=32;
    i++;
   }
   puts(in);

}
