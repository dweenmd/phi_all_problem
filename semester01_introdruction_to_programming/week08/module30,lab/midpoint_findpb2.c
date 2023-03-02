#include <stdio.h>
struct point
{
    float x;
    float y;
};
struct point mid(struct point m, struct point n)
{
    struct point ans ;
    ans.x=(m.x+n.x)/2;
    ans.y=(m.y+n.y)/2;
    return ans;
};
int main()
{
    struct point p1 = {1, 1};
    struct point p2 = {4, 5};
    struct point p3;

    /*
    p3=p1+p2;  //evabe likhle kono output show korbe na
    */
    // when p3 = p2 tokhon resust show korbe
    p3 = p2;
    printf(" when p3 = p2: %.1f, %.1f", p3.x, p3.y);
    // create a function that return point or struct that is(struct point mid(struct point m, struct point))

    p3 = mid(p1,p2);
    
    //now print the mid value of p1 & p2 point

    printf("\nThe mid point is %0.2f, %0.2f", p3.x,p3.y);

    return 0;
}