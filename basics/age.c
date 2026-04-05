#include <stdio.h>
int main(){
    // checking age using ternay operator
    int age;

    printf("\n user enter the age: ");
    scanf("%d", &age);

    (age>=18)? printf("\n elgibile to vote")
             : printf("\n not elgibile to vote");
    
    return 0;
}