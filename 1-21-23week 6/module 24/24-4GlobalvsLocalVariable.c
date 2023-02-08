#include<stdio.h>
// intruduce global variable
int gv=7;  //important
void add_two_number()
    {
         int a,b;
         int gv=15;//important
         printf("enter two number\n");
         scanf("%d %d",&a,&b);
         int sum = a+b;
         printf("%d\n", sum);
         printf("ptinting in add function %d \n", gv);
         gv=gv+2;
         printf("printing in add function %d \n",gv);
         {
            extern int gv;
            printf("printing global gv in add function %d\n", gv);
         }
         
    }
 
int main()
{
    int mv=7, gv= 21;//important
    add_two_number();
    printf("printing in main function %d\n", gv);
    return 0;
}