#include <stdio.h>
int main(){

    float a=10.50;
    float b=4.50;
    int c;
    int x=5;
    int y=15;
    float z;

    // using type(def) operator for manual type casting 
    c=(int)a + (int)b;
    printf("\n the typecasted vaulues sum  is: %d", c);
    

    
    // this is type conversion, implicit conversion
    z=x+y;
    printf("\n sum of x and y in float format: %f", z);

    return 0;
}

