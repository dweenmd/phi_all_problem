#include <stdio.h>
#include <stdlib.h>
/*
static memory allocation
ekhane ami agei declar kore dicchi memory koto lagbe
mane compaile time e bola hochhe code er memory such as-- arr[n] here n is memory
*/

/*
int main()
{
    int n, i;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        arr[i]=i+1;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d th position--> %d\n", i, arr[i]);
    }
    return 0;
}
*/

// Dynamic memory allocation --> run time memory declare

/*

*/
int main()
{
    int n, i;
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)malloc(n * sizeof(int)); // malloc is a fuction of memory allocation that works with bit.
    //    typrcast pointer----

    // array input
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    // print array
    for (i = 0; i < n; i++)
    {
        printf("%d th position--> %d\n", i, *(ptr + i));
    }
    return 0;
}
