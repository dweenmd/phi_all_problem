#include<stdio.h>
struct point {
    int x;
    int y;
};
int main(){
    struct point p1={1,1};
    struct point p2={4,5};
    struct point p3;

     /* 
     p3=p1+p2;  //evabe likhle kono output show korbe na
     */

    printf("%d, %d",p3.x,p3.y);


    return 0;
}