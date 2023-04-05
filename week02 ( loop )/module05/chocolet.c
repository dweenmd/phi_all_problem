#include<stdio.h>
int main()
{
    int n,t;

    scanf("%d",&t);
    while(t--){
        printf("\nchocolate number:");
    scanf("%d",&n);
    int choc=n;
    int pack=n;
    while(pack>=4){
            choc+=(pack/4);
            pack=(pack/4)+(pack%4);

            }
            printf("\nTotal chocolet %d",choc);
            printf("\nRemaining pack %d", pack);
    }


    return 0;
}

