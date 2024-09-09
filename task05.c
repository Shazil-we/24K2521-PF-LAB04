#include <stdio.h>

int main() {

    int customerId;
    char Name[100];
    float unitsConsumed, billAmount, surcharge = 0.0;

    float charge199 = 16.20;
    float charge200to299 = 20.10;
    float charge300to499 = 27.10;
    float chargeabove500 = 35.90;
    float surchargerate = 0.15;
    float surcharge_threshold = 18000.0;
    float outputcharge;
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf(" %s", Name);  
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
    if (unitsConsumed <= 199) {
        billAmount = unitsConsumed * charge199;
        outputcharge = charge199;
    } else if (unitsConsumed >= 200 && unitsConsumed < 300) {
        billAmount = unitsConsumed * charge200to299;
        outputcharge = charge200to299;
    } else if (unitsConsumed >= 300 && unitsConsumed < 500) {
        billAmount = unitsConsumed * charge300to499;
        outputcharge = charge300to499;
    } else {
        billAmount = unitsConsumed * chargeabove500;
        outputcharge = chargeabove500;
    }
    if (billAmount > surcharge_threshold) {
        surcharge = billAmount * surchargerate;
        billAmount = billAmount + surcharge;
    }
    printf("\nElectricity Bill Details:\n");
    printf("\nCustomer ID: %d", customerId);
    printf("\nCustomer Name: %s", Name);
    printf("\nAmount charged per unit %f", outputcharge);
    printf("\nUnits Consumed: %.2f", unitsConsumed);
    printf("\nTotal amount before surcharge %f" , billAmount - surcharge);
    printf("\nSurcharge Amount: %f" , surcharge);
    printf("\nNet Amount to Pay: Rs. %.2f", billAmount);
    return 0;
}
