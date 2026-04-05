// program to check if a triangle is valid or not

#include <stdio.h>
int main(){

    float s1,s2,s3,sum;

    printf("\n enter angle of side s1: ");
    scanf("%f",&s1);

    printf("\n enter angle of side s2: ");
    scanf("%f",&s2);
    
    printf("\n enter angle of side s3: ");
    scanf("%f",&s3);
    
    sum=s1+s2+s3;
    (sum==180)? printf("\n yes the triangle is valid")
                      : printf("\n triangle is invalid");

    return 0;

}