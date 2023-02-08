#include<stdio.h>
void swap (int* x, int* y )
{
    int temp=*x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a=5,b=7;
    printf("a=%d, b=%d \n", a,b);
    // int temp=a;
    // a=b;
    // b=temp;
    //swap by using function
    //[Don't pass value ,, but pass Reference(address) Value]

    swap(&a,&b);//pass address
    printf("a=%d, b=%d \n",a,b);

    return 0;

}
