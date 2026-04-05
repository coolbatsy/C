// a program to find out roots of a quadratic equation 

#include <stdio.h>
#include <math.h>
    int main() {

        float a,b,c;
        // a = coeff of x^2, b = coeff of x & c = const term
        float r1, r2, rp, ip,d;
        // r1 & r2 are roots, rp = real part, ip = imaginary part, d = discriminant

        printf("\n Enter the coefficient of x^2: ");
        scanf("%f", &a);

        printf("\n Enter the coefficient of x: ");
        scanf("%f", &b);

        printf("\n Enter the constant term: ");
        scanf("%f", &c);

        d=(b*b)-(4*a*c);

        if(a==0){
            printf("\n Invalid value");
        }
     
        if(d>0){
            printf("\n Roots are real and distinct and are as follows: ");

            r1=((-b + sqrt(d))/(2*a));
            r2=((-b - sqrt(d))/(2*a));

            printf("\n Root 1: %f", r1);
            printf("\n Root 2: %f", r2); 
        }

        else if(d==0){
            printf("\n Roots are real and equal and are as follows: ");
            r1=(-b/2*a);
            printf("\n Roots: %f %f",r1 ,r1);
    }

    else{
        printf("\n Roots are imaginary where : ");

        rp=(-b/(2*a));
        ip=(sqrt(-d)/(2*a));

        printf("\n Real part: %f", rp); 
        printf("\n Imaginary part: %f", ip); 
    }

    return 0;

}