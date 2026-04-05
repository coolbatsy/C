#include <stdio.h>

int main() {
    float units, base_bill, total_bill, surcharge;

    /* Input units from user */
    printf("Enter total units consumed: ");
    scanf("%f", &units);

    /* Calculate bill based on tiered pricing */
    if(units <= 50) {
        base_bill = units * 0.50;
    }
    else if(units <= 150) {
        base_bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if(units <= 250) {
        base_bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        base_bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    /* Calculate 20% surcharge */
    surcharge = base_bill * 0.20;
    total_bill = base_bill + surcharge;

    /* Output the results */
    printf("\n--- Electricity Bill ---\n");
    printf("Units Consumed: %.2f\n", units);
    printf("Base Amount:    Rs. %.2f\n", base_bill);
    printf("Surcharge (20%%): Rs. %.2f\n", surcharge);
    printf("Total Payable:  Rs. %.2f\n", total_bill);

    return 0;
}