#include<stdio.h>
#include<string.h>

int sum_them(int arr_size, int input_array[])
{
    int sum=0;
    int i;
    for (i=0; i<arr_size; i++)
    {
        sum+=input_array[i];
    }
    return sum;
}
int main ()
{
    int arr[10000],size;
    gets(arr[10000]);

    size=sizeof(arr);
    int sum=sum_them(size,arr);
    printf("The sum is : %d\n",sum);
 return 0;
}
