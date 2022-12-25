#include<stdio.h>
int main()
{
    int n,count1=0,count2=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(int i=0;i<n;i++)
    {
        if(str[i]== '+' && str[i+1]=='+')
        {
            count1++;
        }
        else if(str[i]=='-' && str[i+1]=='-'){
            count2++;
        }
    }
    if(count1>count2)
    {
        printf("%d\n",count1+1);
    }
     if(count2>count1)
    {
        printf("%d\n",count2+1);
    }
    else if(count1==count2){
        printf("0");
    }

    return 0;
    
}