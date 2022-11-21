#include<stdio.h>
int main()
{
    int arr[]={12,7,9,3,15,2,6,5};
    int size=sizeof (arr)/sizeof(arr[0]);
    int i;
    // print all array
    for (int i=0; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

 for (int j=0;j<size-1; j++)
 {

    for (int i=0; i<size-1; i++)
    {
        //compare korbo arr[i] and arrp[i+1] er moddhe

        if (arr[i]>arr[i+1])
        {
            int temp=arr[i];  //swaping
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }

    }

 }

 for(int i=0; i<size; i++){
     printf("%d ", arr[i]);
     }



    return 0;
}
