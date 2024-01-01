#include <stdio.h>

int main() {
    int phy,chem,math,total,totalMathPhy;


    printf("Input Physics Marks : ");
    scanf("%d", &phy);

    printf("Input Chemistry Marks : ");
    scanf("%d", &chem);

    printf("Input Mathematics Marks : ");
    scanf("%d", &math);

    // Calculate totals
    total = phy + chem + math;
    totalMathPhy = math + phy;

    // Check eligibility criteria
    
    if (phy>=65 && chem>=55 && math>=50 && total >= 190) 
	{
        printf("The candidate is eligible.\n");
    } 
	else if (totalMathPhy >= 140) 
	{
        printf("The candidate is eligible.\n");
    } 
	else 
	{
        printf("The candidate is not eligible.\n");
    }
    
}

