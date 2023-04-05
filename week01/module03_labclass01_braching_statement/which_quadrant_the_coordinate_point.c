//Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the coordinate point:: ");
    scanf("%d %d", &a,&b);
    if (a>0 && b>0){
        printf("The coordinate point (%d,%d) lies in the First quadrant.",a,b);
    }
    else if (a<0 && b>0){
        printf("The coordinate point (%d,%d) lies in the Second quadrant.",a,b);
    }
    else if (a<0 && b<0){
        printf("The coordinate point (%d,%d) lies in the Third quadrant.",a,b);
    }
    else if (a>0 && b<0){
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",a,b);
    }
    else {
        printf("The coordinate point (%d,%d) is the Main Point",a,b);
    }
return 0;
}
