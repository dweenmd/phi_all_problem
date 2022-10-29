#include<stdio.h>
int main()
{
    int n;
    printf("Enter your chocolate number:");
    scanf("%d",n);
    int choc=n;
    int pack=n;
    while(n>=4){
            choc+=(pack/4);
            pack=(pack/4)+(pack%4);

            }
            printf("Total Chlocklet %d",choc);

    return 0;
}

