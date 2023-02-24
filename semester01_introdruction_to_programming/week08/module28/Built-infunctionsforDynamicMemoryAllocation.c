#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *ptr;
//calloc garbage value 0 kore dei
    ptr = (int *)calloc(n ,sizeof(int)); // calloc is a fuction of memory allocation that works with bit.
    //    typrcast pointer----
    if (ptr==NULL){
        printf("Memory Allocation Failed\n");
    }

    // array input
    for (i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
    // print array
    for (i = 0; i < n; i++)
    {
        printf("%d th position--> %d\n", i, ptr[i]);
    }
    ptr= realloc (ptr, (n+5)*sizeof(int));
    free(ptr);  
    return 0;
}