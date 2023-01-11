#include<stdio.h>
int is_vowel(char x)
{
    // if (x == 'A'|| x == 'E'|| x == 'I'|| x== 'O'|| x == 'U')
    // {
    //     return 1;
    // }
    // else 
    if ( x == 'a'|| x == 'e'|| x == 'i'||x == 'o'||x == 'u')
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char ch;
    ch = getchar();
    getchar();
    if (is_vowel(ch ==1))
    {
        printf("The character is a vowel.\n");
    }
   else
        printf("The character is a consonant.\n");

    return 0;
}

