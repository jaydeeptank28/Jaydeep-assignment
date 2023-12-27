#include<stdio.h>
#include<math.h>

main()
{
	float pri,roi,time,amount,ci;
	
	printf("Enter Principal Amount : ");
	scanf("%f",&pri);
	
	printf("Enter Rate of Interest (in percentage) : ");
	scanf("%f",&roi);
	
	printf("Enter Time(in years) :");
	scanf("%f",&time);
	
	//Amount = principal(1 + Rate of interest/100)time
	amount = pri *  ((pow((1 + roi / 100), time))); 
	
	//compound interest = amount - principal 
	ci = amount - pri;
		
	printf("Compound Interest : %.2f",ci);
	
	
}
