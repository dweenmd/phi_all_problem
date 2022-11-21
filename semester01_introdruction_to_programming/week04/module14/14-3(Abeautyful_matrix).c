#include<stdio.h>
int main()
{
    int i,j,x,y;
    int arr[5] [5];
    for(i=0;i<5;i++){
        for (j=0;j<5;j++){

            scanf("%d",&arr[i][j]);
            if (arr[i][j]==1)
            {
                x=i;
                y=j;

            }
        }
    }
    /*for(i=0;i<5;i++){
        for (j=0;j<5;j++){
           printf("%d ", arr[i][j]);


        }
         printf("\n");
    }*/
    int row_change, col_change,ans;
    if (x>2)
        row_change=(x-2);
    else
        row_change=(2-x);
    if (y>2)
        col_change=(y-2);
    else
        col_change=(2-y);


ans=row_change+ col_change;
printf("%d",ans);

    return 0;
}
