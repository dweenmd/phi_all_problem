// selection sorting

#include<stdio.h>
int main()
{
    int arr[]={12,7,9,3,15,2,6,5};
    int size=sizeof (arr)/sizeof(arr[0]);
    int sorted_arr[size];
    // print all array
    for (int i=0; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for (int j=0; j<size; j++)
    {int min=arr[0];
    int min_index=0;

    for (int i=0; i<size ; i++)
    {
            if(arr[i]<min)
            {
             min = arr[i];
             min_index=i;

            }
    }
      sorted_arr[j]= min;
      arr[min_index]=9999;
    /*for (int i=0; i<size ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");*/
}

for (int i=0; i<size ; i++)
    {
        printf("%d ",sorted_arr[i]);
    }
    printf("\n");
  return 0;
}
