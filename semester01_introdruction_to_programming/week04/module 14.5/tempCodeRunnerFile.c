#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k;

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d", &r1,&c1 );
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2,&c2 );

    while (c1!=r2){
        printf("            Error!!\n\ncolumn of first matrix and row of second matrix are not equal. ");

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d", &r1,&c1 );
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2,&c2 );

    }

    return 0;
}
