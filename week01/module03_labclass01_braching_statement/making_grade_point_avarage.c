#include<stdio.h>
int main()
{
    int a;
    printf("Enter your number::");
    scanf("%d",&a);
   if (a<0 || a>100)
   {
    printf("Wrong Input");
   }
    else if(a>=80 && a<=100)
    {
        printf("you got:: 'A+' ");
    }
    else if(a>=70 && a<=79)
    {
        printf("you got:: 'A' ");
    }
    else if(a>=60 && a<=69)
    {
        printf("you got:: 'A-' ");
    }
    else if(a>=50 && a<=59)
    {
        printf("you got:: 'B' ");
    }
    else if(a>=40 && a<=49)
    {
        printf("you got:: 'C' ");
    }
    else if(a>=33 && a<=39)
    {
        printf("you got:: 'D' ");
    }
    else 
    {
        printf("you got:: 'F' ");
    }
    
    return 0;
}
