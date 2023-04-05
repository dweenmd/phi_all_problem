#include<stdio.h>
int main()
{
    // array er jonno pointer declaration er kono proyjon nei
    //array er nam tai ekta pointer
    int arr[3]={1,2,3};

    printf ("%p \n", arr);//arr= arr[0]
    
    printf ("%p \n", (arr+1));//arr+1= arr[1]


}