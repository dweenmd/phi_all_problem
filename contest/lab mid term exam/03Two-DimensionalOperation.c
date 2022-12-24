#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[100][100];
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
 for (i=1; i<=n;i++){
        for (j=1;j<=m;j++){
            if (i==j && i==mat[i][j]){
                mat[i][j]=mat[i][j]+3;
            }
        else if (i==mat[i][j] ){
             mat[i][j]=mat[i][j]+2;
        }
          else if (j==mat[i][j] ){
             mat[i][j]=mat[i][j]+1;
        }



        }
    }
    //print matrix
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}