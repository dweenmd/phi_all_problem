//qustion:: Write a C program to find the eligibility of admission for a professional course based on the following criteria: Go to the editor
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and
//qustion:: Write a C program to find the eligibility of admission for a professional course based on the following criteria: Go to the editor
//Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and
//Total in all three subject >=190 or Total in Maths and Physics >=140
//Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72
//Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.
//Expected Output :
//The candidate is not eligible for admission.
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the marks of MATH:: ");
    scanf("%d",&a);
    printf("Enter the marks of PHYSICS:: ");
    scanf("%d",&b);
    printf("Enter the marks of CHEMISTRY:: ");
    scanf("%d",&c);
    d=a+b;
    e=a+b+c;
    printf("Total marks of Maths and  Physics :%d\n",d);
    printf("Total marks of Maths,Physics and Chemistry:%d\n",e);

    if ((a>=65&&b>=55&&c>=50) && (d>=140 || e>=190)){
        printf("The  candidate is eligible for admission.\n");

    }
    else{
        printf("The  candidate is not eligible for admission.\n");
    }
return 0;
}
