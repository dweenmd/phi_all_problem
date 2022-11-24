#include<stdio.h>
int main(){
    char s1[30]="dween mohammad";
    char s2[30];
    // now we find out  1st string lenth without strlen
    int len=0;
    int i=0;
   while(s1[i]!='\0'){
    i++;
    len++;

   }
//    printf("%d",len);
    //now we place the first string inversely inside the second string
    int j;
    for (j=0,i=len-1;i>=0;i--,j++){
        s2[j]=s1[i];
        
    }
        s2[j]='\0';
        printf("%s",s2);

return 0;
}
