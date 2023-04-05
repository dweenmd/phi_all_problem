#include<stdio.h>
int main()
{
    int n,t,i,max1,max2;
    int arr[1000];

    printf("\nEnter the number of inputs: ");
    scanf("%d",&n);

    printf("\nEnter the values: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    max1=max2=0;

    for (i=0;i<n;i++)
        {
        if(arr[i] > max1)
        {

            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i ] < max1)
        {

            max2 = arr[i];
        }
        }
    printf("maximum %d\n ",max1);
    printf("2nd maximum %d\n ",max2);



    return 0;
}



