#include<stdio.h>

main()
{
	float ms,as;
	
	printf("Enter a Monthly Salary : ");
	scanf("%f",&ms);
	
	//for annual salary = monthly salary * 12
    as = ms * 12;
    printf("Annual Salary : %.2f",as);
}
