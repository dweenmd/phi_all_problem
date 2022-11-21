#include<stdio.h>
int main()
{
    char sen[10000];

    fgets(sen, sizeof(sen), stdin);

    /*printf("%s",seno);*/

    int i=0,counter=0;
    while (sen[i]!='\0')
    {
        //vowel hole counter++
        if (sen[i]=='a'||sen[i]=='A')
        counter++;
        else if (sen[i]=='e'||sen[i]=='E')
        counter++;
        else if (sen[i]=='i'||sen[i]=='I')
        counter++;
        else if (sen[i] =='o'||sen[i]=='O')
        counter++;
        else if (sen[i]=='u'||sen[i]=='U')
        counter++;


        i++;
    }

    printf("NO. of vowels = %d",counter);
    return 0;
}
