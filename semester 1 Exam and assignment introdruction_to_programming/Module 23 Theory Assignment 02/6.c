#include<stdio.h>
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++)
        fact=fact*i;
    return fact;

}
double doubleFact(int a, int b){
    double ratio;
    if (a>b){
        ratio= (double)factorial(a)/factorial(b);
    }
    else
         ratio= (double)factorial(b)/factorial(a);

    return ratio;

}
int main(){

    double a,b;
    scanf("%lf %lf",&a,&b);

    printf("%.2lf ",doubleFact(a,b));



}
