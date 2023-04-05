#include<stdio.h>
#include<string.h>
int main()
{
    char a[103];
    fgets(a, sizeof(a),stdin);
    for (int i=0;i<strlen(a)-1;i++){
        if (a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        if (!(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')){

        printf(".%c",a[i]);

        }

    }


    return 0;
}
