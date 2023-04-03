
#include <stdio.h>
#include <string.h>

void Assendingingsort(char dween[], int size);

int main()
{
    char dween[100];
    scanf("%s", dween);
    int size = strlen(dween);
    Assendingingsort(dween, size);
    printf("\n");
    puts(dween);

    return 0;
}

void Assendingingsort(char dween[], int size)
{
    for (int i = 0; i < (size); i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (dween[j] > dween[j + 1])
            {
                char temp = dween[j];
                dween[j] = dween[j + 1];
                dween[j + 1] = temp;
            }
        }
    }
}