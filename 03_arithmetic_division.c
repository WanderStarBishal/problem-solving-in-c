#include<stdio.h>
int main()
{
    float a,b,c;
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter second number;");
    scanf("%f",&b);
    c=a/b;
    printf("%f/%f = %f\n",a,b,c);
    return 0;
}