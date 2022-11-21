#include<stdio.h>
int main() //Dween_Mohammad 
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,i,j,k, sum=0;

    printf("Enter rows and column for first matrix : ");
    scanf("%d %d", &r1,&c1 );
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2,&c2 );

    while (c1!=r2){
        printf("\n\t\t\tError!!\n\ncolumn of first matrix and row of second matrix are not equal. ");

    printf("\n\nEnter rows and column for first matrix : ");
    scanf("%d %d", &r1,&c1 );
    printf("Enter rows and column for second matrix : ");
    scanf("%d %d", &r2,&c2 );

    }
     printf("\nEnter Elements for first matrix:");
    //taking input for first matrix..
    for (i=0;i<r1;i++){
        
        for (j=0;j<c1;j++){
            printf("\nfirst matrix [%d, %d]=",i,j);
            
            scanf("%d",&first [i][j]);
        }
    }
     //taking input for second matrix..
    printf("\nEnter Elements for second matrix:");
    for (i=0;i<r2; i++){

        for (j=0;j<c2;j++){
            printf("\nsecond matrix [%d, %d]=",i,j);
            scanf("%d",&second [i][j]);
        }
    }
    // for matrix maltiplication we have to maintain some order 
// 1)first matrix row multiplay all elements of second matrix individual column and sum them.also puts the value of sum 
// in second matrix first row individual column..
// this order must be maintained.....
// sum=0;
// sum=sum + first matrix[i][k]*second matrix [k][j]
// multiplied[i][j]=sum


        //multiplying matrix
    for(i=0;i<r1; i++){                          //1st matrix er row
         for (j=0;j<c2;j++){                    //2nd matrix er column
             for (k=0; k<c1; k++){             //1st er prottek row er elements ba column gula

            sum=sum + first [i] [k] * second[k][j];
           
            }    
            result[i][j]= sum;
            sum = 0;
        }
    }


    //print first and second matrix..
    printf ("\n\nFirst matrix::\n");
    for (i=0;i<r1; i++){
        for (j=0;j<c1;j++){
            printf("  %d",first [i][j]);
        }
        printf("\n");
    }
    printf ("\n\nSecond matrix::\n");
    for (i=0;i<r2; i++){
        for (j=0;j<c2;j++){
            printf("  %d",second[i][j]);
        
        }
        printf("\n");
    }


//print multiplaied matrix
printf("\n\n result matrix:\n");

    for (i=0;i<r1; i++){
        for (j=0;j<c2;j++){
            printf("  %d",result[i][j]);
        
        }
        printf("\n");
    }
    return 0;
}
