#include<stdio.h>
#include<string.h>
int main(){
    int test_case,input[100];

    scanf("%d",&test_case);

    //user input
    for (int i=0;i<test_case;i++){
        scanf("%d",&input[i]);
    }

   //sorted input
   int size=test_case;
    for (int j=0;j<size-1; j++){
        for (int i=0; i<size-1; i++)
         {
        //compare korbo arr[i] and arr[i+1] er moddhe

        if (input[i]>input[i+1])
            {
            int temp=input[i];  //swaping
            input[i]=input[i+1];
            input[i+1]=temp;
            }
        }
    }
    // for(int i=0; i<size; i++){
    //  printf("%d ", input[i]);
    // }
    int sum=0;
    if (input[size-1]%2==0){
        for(int i=size-2;i>=0;i--){
            if (input[i]%2==0){
                sum=input[size-1]+input[i];
                    printf("%d",sum);
                break;
            }
        }
    }


     if(input[size-1]%2!=0){
        for(int i=size-2;i>=0;i--){
            if (input[i]%2!=0){
                sum=input[size-1]+input[i];
                      printf("%d",sum);
                break;
            }
        }
    }






    return 0;
}
