#include<stdio.h>
int main(){
    int n;
    int arr[1000];
    scanf("%d ",&n);
    for(int i=0; i<n;i++){
        scanf("%d%%",&arr[i]);

    }
    for(int i=0; i<n;i++){
        if (arr[i]>=0 && arr[i]<60){
            int chrg=(60-arr[i])*1+20*2+20*3;
            printf("%d minutes\n",chrg);
        }
      else if (arr[i]>=60 && arr[i]<80){
            int chrg=(80-arr[i])*2+20*3;
            printf("%d minutes\n",chrg);
        }
       else if (arr[i]>=80 && arr[i]<100){
            int chrg=(100-arr[i])*3;
            printf("%d minutes\n",chrg);
        }
        else{
            printf("0 minutes\n");
        }
    }


return 0;
}
