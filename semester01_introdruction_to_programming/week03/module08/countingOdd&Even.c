//count how many odd and even numbers are exist...
#include<stdio.h>
int main()
{
    int n;
    int arr[10000];
    printf("How many elements you want to input:");
    scanf("%d",&n);
    printf("Your inputs numbers are:");
    for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
    }
    int even_count=0,odd_count=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            even_count++;
        }
        if(arr[i]%2!=0){
            odd_count++;
        }
    }
    printf("Even count: %d\n",even_count);
    printf("Odd count: %d",odd_count);




    return 0;
}
