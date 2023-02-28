#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
double distance(struct point p, struct point q)
{

    return sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
}
int main()
{
    struct point p1, p2;
    printf("input 1st co-ordinate,x1,y1: ");
    scanf("%d %d",&p1.x,&p1.y);
    printf("input 2nd co-ordinate,x2,y2: ");
    scanf("%d %d",&p2.x,&p2.y);

    printf("The distance between them = %lf \n", distance(p1, p2));
    return 0;
}
