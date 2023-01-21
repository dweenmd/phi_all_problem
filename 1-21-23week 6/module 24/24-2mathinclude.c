#include<stdio.h>
#include<math.h>
int main()
{
    int a=4,b=2;
    const float pi=3.141593;
    //use power function

    printf("%.2f\n", pow(a,b));

    //use squer root function

    printf("%.2f\n", sqrt(a));

    //use absolute function

    printf("%.2f\n", abs(-8));
//sine value
float ans,ans1, ans2, ans3;
    ans = sin(pi/6);//(pai /6 == 30 degree)
    // in redian    
    printf("%f\n",ans);
    float n, angle;
    printf ("enter angle in degree:: ");

    scanf ("%f",&n);
    // angle convert into redian

    angle =((n*pi)/180);
    ans1=sin(angle);
    ans2=cos(angle);
    ans3=tan(angle);
    printf("value of sin is %f\n",ans1);
    printf("value of cos is %f\n",ans2);
    printf("value of tan is %f\n",ans3);
    

    

    return 0;
}