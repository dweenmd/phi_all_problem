#include<stdio.h>
void find_max_min(int len, int arr[],int* mx,int* mn)
{
    *mx=arr[0];
    *mn=arr[0];
    for(int i=1;i<len;i++){
        if (*mx<arr[i]){
            *mx=arr[i];
        }
        if(*mn>arr[i])
            *mn=arr[i];
    }
}
int main()
{
    int arr[]={12,6,9,3,4,21,66};
    int len=sizeof(arr)/sizeof(int);
    // printf("%d",len);
    int max, min;
    find_max_min(len,arr,&max,&min);
    printf("%d %d",max,min);

    return 0;

}
