#include <stdio.h>
struct point
{
    float x;
    float y;
};
struct triangle
{
    struct point A;
    struct point B;
    struct point C;
};
struct point centroid (struct triangle t)
{
    struct point ans;
    ans.x=(t.A.x+t.B.x+t.C.x)/3;
    ans.y=(t.A.y+t.B.y+t.C.y)/3;
    return ans;
}
int main()
{
    struct point p1 = {1, 1};
    struct point p2 = {4, 5};
    struct point p3 = {1, 5};

    struct triangle t = {p1, p2, p3};
    struct point c= centroid(t);
    printf("\n The centroid is ( %.2f , %.2f )",c.x,c.y);
}