#include<stdio.h>
void solve()
{
    int a,b;
    printf("Enter two number::");
    scanf ("%d %d", &a,&b);
    printf("sum of two number:: %d\n", a+b);
}
int main ()
{
    int t,i;
    printf("Enter Test Case::");
    scanf("%d",&t);
    for (i=0; i<t; i++)
    {
        solve ();
    }
    return 0;
}