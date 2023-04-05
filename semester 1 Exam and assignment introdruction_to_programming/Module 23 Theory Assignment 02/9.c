#include<stdio.h>
int main()
{
    int mat[3][3],i,j;
    for (i=0;i<3; i++){
        for (j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for (j=0;j<3;j++){
        for (i=0;i<3;i++){
            printf("%d\t",mat[i][j]);

        }
        printf("\n");
    }


    return 0;
}
