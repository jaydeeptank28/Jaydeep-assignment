#include<stdio.h>

main()
{
	float principal,rate,time,interest;
	
	printf("Enter the principal amount :");
	scanf("%f",&principal);
	
	printf("Enter the rate of interest (per annum) :");
	scanf("%f",&rate);
	
	printf("Enter the time (in years) :");
	scanf("%f",&time);
	
	// simple interst = (p*r*t)/100
	interest=(principal*rate*time)/100;
	
	printf("Simple interest %.2f",interest);
}
