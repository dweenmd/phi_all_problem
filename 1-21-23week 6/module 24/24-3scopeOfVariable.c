#include<stdio.h>
// intruduce global variable
int gv=9;
void add_two_number()
    {
         int a,b;
         printf("enter two number\n");
         scanf("%d %d",&a,&b);
         int sum = a+b;
         printf("%d\n", sum);
         printf("ptinting in add function %d \n", gv);
         gv=gv+2;
         
    }
 
int main()
{
    int mv=7;
    add_two_number();
    printf("printing in main function %d\n", gv);
    return 0;
}