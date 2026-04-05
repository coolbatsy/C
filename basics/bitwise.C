// working on bitwise operations 

#include <stdio.h>
    int main(){

        int x=0b101100;
        int y=0b101000;
        int z=0b100001;

        // bitwise AND
        int AND=x&y&z;
        printf("\n Result of AND bitwise opeartion: %d", AND);

        // bitwsie OR
        int OR=x|y|z;
        printf("\n Result of OR bitwise opeartion: %d", OR);

        // bitwise XOR
        int XOR=x^y^z;
        printf("\n Result of XOR bitwise opeartion: %d", XOR);

        // bitwsie NOT x
        int NOTx=~x;
        printf("\n Result of NOT  bitwise opeartion on x: %d", NOTx);

        // bitwsie NOT y
        int NOTy=~y;
        printf("\n Result of NOT bitwise opeartion on y: %d", NOTy);

        // bitwise NOT z
        int NOTz=~z;
        printf("\n Result of NOT bitwise opeartion on z: %d", NOTz);

        return 0;
    }
