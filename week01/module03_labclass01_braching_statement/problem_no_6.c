 #include<stdio.h>
 int main()
 {
    int a,b;
    printf("Enter your marks and your bonus mark:: ");

    scanf("%d %d", &a,&b);

    if (a+b>=100)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
 }
