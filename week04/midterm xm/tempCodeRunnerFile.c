#include<stdio.h>
#include<string.h>
int main()
{
    int sumrow=0,sumcol=0,sumdig1=0,sumdig2=0, i,j,flag=0;
    int arr[3][3];
    //enter matrix.....
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf ("%d",&arr [i][j]);
        }
    }
    //print matrix......

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf ("%d  ",arr [i][j]);
        }
        printf("\n");
    }
//cheak diagonal
    for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            if (i==j){
                sumdig1=sumdig1+a[i][j];
            }
            if(i+j==3-1){
                sumdig2=sumdig2+a[i][j];
            }
        }
    } 

    if (sumdig1!=sumdig2)
    {
        flag=1;
    }
    else
    {
        for (i=0;i<3;i++)
        {
            sumcol=sumrow=0;

            for (j=0;j<3;j++)
            {
                sumcol=sumcol+a[j][i];
                sumrow=sumrow+a[i][j];
            }
            if (sumcol!=sumdig1)
            {
                flag=1;
            }
            else if(sumrow!=sumdig1)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }

    }

    if (flag==0)
    {
        printf("/n YES");
    }
    else
    printf("/n NO");
return 0;

}
