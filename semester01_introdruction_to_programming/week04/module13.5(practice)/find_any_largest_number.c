#include<stdio.h>
int main()
{
    int n,i,j;
    //step 1
    printf("Declare array size :: ");
    scanf("%d",&n);
    int input[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
        // printf("%d ",input[i]);
    }
    //dhori input array er man gulu holo[10,7,5,2,1]
    //step 2 : we find out the largest element ..
    int largest =input[0];
    for (i=1; i<n ; i++)
    {
        if ( input[i]>largest){
            largest = input[i];
        }
    }
    printf("the largest number is: %d ", largest);

    //step 3:make an array same size of largest number and fill all index with 0;
    printf("\n");

    int arr[largest + 1];
    for (i=0; i<=largest; i++)
    {
        arr[i]=0;
        printf(" %d",arr[i]);

    }
    printf("\n");

    //step 4:
    for (i=0; i<n; i+=1)
    {
        arr[input[i]]+=1;      //[10,7,5,2,1] //frist array er index er mangula bosbe; arr[innput[0]]=1,
        // arr[i]+=1;              //  arr[10]+=1;
        // arr[i]=arr[i]+1;        //  arr[10]=arr[10]+1;

    }
    printf("\n");
  for (i=0; i<=largest; i+=1)
    {

        printf("%d ", arr[i]);

    }

    int count=0,position;
    printf("\nWhich largest value you  want to print: ");
    scanf("%d", &position);
    for (i=largest; i>=1;i-=1){
        if (arr[i]==1){
            count+=1;
        }
        if (count==position){
            printf("The %dth largest value is : %d",position, i);
            break;
        }
    }
    return 0;
}
