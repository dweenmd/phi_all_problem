//https://docs.google.com/document/d/1wFv0Hv5pvqf2VGm4DG_Q6chRI4mVKFlR/edit

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
