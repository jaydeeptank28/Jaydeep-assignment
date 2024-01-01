#include <stdio.h>

int main() {
    int units;
    float totalBill, surcharge;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate total bill based on unit charges
    if (units<=50) 
	{
        totalBill = units*0.50;
    } 
	else if (units<=150) 
	{
        totalBill = 50*0.50 + (units-50)*0.75;
    } 
	else if (units<=250) 
	{
        totalBill = 50*0.50 + 100*0.75 + (units-150)*1.20;
    } 
	else 
	{
        totalBill = 50*0.50 + 100*0.75 + 100*1.20 + (units-250)*1.50;
    }

    // Add surcharge of 20%
    surcharge = 0.20 * totalBill;
    totalBill += surcharge;

    // Display the bill
    printf("\nElectricity Bill\n");
    printf("Units Consumed: %d\n", units);
    printf("Total Bill: Rs. %.2f\n", totalBill);
}

