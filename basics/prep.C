// checking some conditions
#include <stdio.h>

int main() {

    float a;

    printf("\nEnter a number: ");
    scanf("%f", &a);

    (a > 0) ? printf("\n%f is positive", a)
            : (a < 0) ? printf("\n%f is negative", a)
                      : printf("\nNumber is zero");

    return 0;
}