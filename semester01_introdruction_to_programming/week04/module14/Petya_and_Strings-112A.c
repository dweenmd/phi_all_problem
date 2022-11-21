#include<stdio.h>
int main()
{
    char a [103],b[103];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    int len =strlen(a)-1;
    for(int i=0; i<len; i++){
       if (a[i]>='A'&& a[i]<='Z'){
            a[i]+=32;
        }
         if (b[i]>='A'&& b[i]<='Z'){
            b[i]+=32;
        }
        if(a[i]>b[i])
        {
            printf("1");
            return 0;
        }

        else if (a[i]<b[i])
        {
            printf("-1");
            return 0;
        }
        /*printf("%c",a[i]);
        printf("%c",b[i]);*/
    }

        printf("0\n");
    return 0;
}
