#include<stdio.h>
int main()
{
    int n,row,col;

    printf("Enter N:");
    scanf("%d",&n);

    for(row=1;row<=n;row++){

        for(col=row;col>=1;col--){
            printf("%d ",col);

        }
printf("\n");
    }
}
