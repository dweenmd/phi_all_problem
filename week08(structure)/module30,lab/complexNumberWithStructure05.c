#include <stdio.h>
struct comp
{
    double real;
    double img;
};
void printComp(struct comp c)
{
    printf("%.1lf+%.1lfi\n", c.real, c.img);
}
struct comp add_comp(struct comp a, struct comp b) // complex number sum ;
{
    struct comp ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;

    return ans;
}
// multiplication
struct comp mult_Comp(struct comp a, struct comp b)
{
    struct comp ans;
    ans.real = a.real * b.real - a.img * b.img;
    ans.img = a.real * b.img + b.real + a.img;
    return ans;

}
int main()
{
    struct comp c1 = {5.9, 3.1};
    struct comp c2 = {-2.5, 3.7};
    printComp(c1);
    printComp(c2);
    // ptint sum of complex number
    printComp(add_comp(c1, c2));
    // print multiplication of complex number
    printComp(mult_Comp(c1, c2));
}
