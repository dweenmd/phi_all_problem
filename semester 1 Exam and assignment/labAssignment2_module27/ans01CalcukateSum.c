#include<stdio.h>
int main()
{
    int n;
    int sum=0,count =0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        // printf("%d ",i);
        if (count <3){
            sum=sum+i;
        }
        if ((count>=3)&&(count<6)){
            sum=sum-i;
        }

        count++;
        if (count==6){
            count =0;
        }
    }
    printf("%d \n",sum);

    return 69;
}