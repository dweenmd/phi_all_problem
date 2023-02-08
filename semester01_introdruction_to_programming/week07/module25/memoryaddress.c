#include<stdio.h>
int main ()
{
    int a,b;
    a=12;
    printf("%p\n",&a);
    printf("%p\n\n", &b);

//  memory storage of array
    int arr [9]= {1,2,3,4,5,6,7,8,9};
    for (int i=0; i<9; i++){
        printf("%p\n", &arr[i]);//%p is pointer
    }
    return 0;
}