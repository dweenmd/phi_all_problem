#include<stdio.h>
int main()
{
    int a=2; 
    int* p;
    p = &a;
    //print address location
    printf("%p \n", p);
    // now we print the address value of p
    printf("%d \n",*p);
    return 0;

}