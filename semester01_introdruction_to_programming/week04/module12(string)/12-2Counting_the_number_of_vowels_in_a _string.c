#include<stdio.h>
int main()
{
    char sen[10000 ];
    //scanf("%s",sen);
    fgets(sen,sizeof(sen),stdin);

    printf("%s",sen);
    
    int i=0,counter=0;
    while (sen[i]!='\0')
    {
        //vowel hole counter++
        if (sen[i]=='a')
        counter++;
        else if (sen[i]=='e')
        counter++;
        else if (sen[i]=='i')
        counter++;
        else if (sen[i] =='o')
        counter++;
        else if (sen[i]=='u')
        counter++;
        
        
        i++;
    }

    printf("NO. of vowels = %d",counter);
    return 0;
}