// the solve of llps in codeforce problem
#include <stdio.h>
#include <string.h>
void desendingsort(char dween[], int size)
{
    for (int i = 0; i < (size); i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (dween[j] < dween[j + 1])
            {
                char temp = dween[j];
                dween[j] = dween[j + 1];
                dween[j + 1] = temp;
            }
        }
    }
}
int main()
{
    char dween[100];
    scanf("%s", dween);
    int size = strlen(dween);
    desendingsort(dween, size);
    printf("%s", dween);

    return 0;
}
