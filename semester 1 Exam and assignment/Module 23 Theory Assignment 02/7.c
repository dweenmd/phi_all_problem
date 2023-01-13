#include<stdio.h>
float medium(int arr[], int n)
{
    int i,j,size;
    float med;
    size= n;
    printf("Size: %d\n",size);

    for (i=0; i<size-1; i++)
    {
        for(j=0; j<size-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }

    }

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    if(n%2==0){
        med= (float)(arr[n/2]+arr[(n-1)/2])/2;
        return med;
    }
    else if (n%2!=0){
            med= (n+1)/2;
        return arr[(int)med-1];
    }

}
int main()
{
    int input[10000];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d",&input[i]);
    }

   float median= medium(input,n);
   printf("%.2f ",median);


    return 0;
}
