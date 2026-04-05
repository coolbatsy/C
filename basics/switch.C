#include <stdio.h>
int main(){

    int n;
    printf("\n enter a number: ");
    scanf("%d",&n);

    // applying switch case 

    switch(n%2){

    case 0:
    printf("\n even number");
    break;

    case 1:
    printf("\n odd number");
    break;

    default:
    printf("\n invalid input");

    return 0;
    }
}