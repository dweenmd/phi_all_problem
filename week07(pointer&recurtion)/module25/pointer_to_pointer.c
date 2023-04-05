#include <stdio.h>
int main()
{

    int a=5;
    printf("%d\n",a);
    int* p= &a;
    printf("%p \n",p);
    int** q = &p;// pointer er pointer
    printf ("%p \n",q); 
    // a er value change korte chi
    **q=7;
    printf("%d\n",a);
    return 0;
}