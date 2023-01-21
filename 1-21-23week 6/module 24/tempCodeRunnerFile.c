#include<stdio.h>
#include<math.h>
int main()
{
    int a=4,b=2;
    //use power function

    printf("%.2f\n", pow(a,b));

    //use squer root function

    printf("%.2f\n", sqrt(a));

    //use absolute function

    printf("%.2f\n", abs(-8));
//sine value
float ans,ans1, ans2, ans3;
    ans = sin(3.1416/6);//(pai /6 == 30 degree)
    // in redian    
    printf("%f\n",ans);
    int n;
    printf ("enter  an angle to convert sin _value:: ");

    scanf ("%d",n);
    // angle convert into redian

    int angle =(n*3.1416)/180;
    ans1=sin(angle);
    ans2=cos (angle);
    ans3=tan (angle);
    printf("value of sin is %f",ans1);
    printf("value of sin is %f",ans2);
    printf("value of sin is %f",ans3);
    

    

    return 0;
}