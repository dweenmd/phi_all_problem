/*
steps:
1) Input nite hobe n array size er{ inptut[n]}
2) oi array theke largest value ber korte hobe
3) arr[ largest value + 1 ] size er declare kore er  prottek index e 0 assign korte hobe
4) 0 theke n times ekta loop chalate hobe and every index e jonno
   operation ta --> arr[input]+=1;
5) depends problem statmant ..

*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter array size :: ");
    scanf ("%d",&n);

    int input[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&input [i]);
    }
                                        /* for(i=0;i<n;i++){
                                            printf("%d ", input [i]);
                                            }*/
    int largest=input[0];
    for(i=1;i<n;i++)
    {
        if (input[i]>largest)
        {
            largest=input[i];
        }
    }
                                        // printf( " %d", largest);
    int arr[largest+1];
    for (i=0 ;i<=largest ; i++)
    {
        arr[i]=0;
    }


    for (i=0; i<n ;i++)
    {
        arr[input[i]]+=1;
    }


    int duplicate=0, unique=0;
    for (i=0;i<=largest; i++)
    {
        if ( arr[i]==1)
        {
            unique++;
        }

        else if (arr[i]>1)
        {
            duplicate++;
        }


    }
    printf("There are %d duplicate values",duplicate);
    printf("There are %d unique values",unique);
return 0;
}
