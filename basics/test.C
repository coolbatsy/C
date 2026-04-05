#include <stdio.h>
int main(){

    float a,b,sum,sub,div,prod;
    printf("\n enter a number: ");
    scanf("%f",&a);
    printf("\n enter another number: ");
    scanf("%f",&b);

    sum=a+b;
    sub=a-b;
    div=a/b;
    prod=a*b;

    printf("\n sum of the numbers is %f", sum);
    printf("\n sub of the numbers is %f", sub);
    printf("\n div of the numbers is %f", div);
    printf("\n prod of the numbers is %f", prod);

    return 0;
}