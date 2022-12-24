/* https://www.hackerrank.com/lab-mid-term-exam-batch-02 */
#include<stdio.h>
int main()
{
    long long int n,d;
    scanf ("%lld",&n);
   
    if (n/3)
    {
         d=n/3;
        printf("%lld",d);
    }
    else 
    printf("-1");

    return 0;

}