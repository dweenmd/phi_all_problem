#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t,i;
    int s[21];
    scanf("%d",&t);
    for(i=0; i<t; i++){
        scanf("%d ",&s[i]);
    }
    for(i=0; i<t; i++){
        printf("%d ",s[i]);
    }




    return 0;
}
