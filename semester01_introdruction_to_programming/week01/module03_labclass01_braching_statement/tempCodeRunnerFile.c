#include<math.h>
#include<stdio.h>

int main(){
    double a,b,c,d,root1,root2,realpart,imagpart;
    printf("Enter the value (aX^2+bx+c) of a,b,c: ");
    scanf("%lf %lf %lf", &a,&b,&c);
    d=b*b-4*a*c;
    //when discriminant is greater then 0;roots are real number
    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    //when discriminant is 0;roots are equal
    else if (d == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    //when discriminant is less then 0;imaginary part.
 else {
        realpart = -b / (2 * a);
        imagpart = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realpart, imagpart, realpart, imagpart);
    }
    return 0;
}
