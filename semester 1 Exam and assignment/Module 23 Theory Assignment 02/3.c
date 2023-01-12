#include<stdio.h>
int main()
{
    char in[1000];
    int store1=0;
    int store7=0;
    int store9=0;
    gets(in);
    for (int i=0; in[i]!='\0'; i++){
        if (in[i]=='1'){
            store1+=1;
        }
        else if (in[i]=='7'){
            store7+=1;
        }
        else if (in[i]=='9'){
            store9+=1;
        }

    }
    if ((store1>0 && store7>0) && store9>0){
        printf("Yes\n");
    }
    else {
        printf("NO");
    }


    return 0;
}
