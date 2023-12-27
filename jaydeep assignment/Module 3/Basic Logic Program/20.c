#include<stdio.h>
main()
{
	float ms,ip,li,rs,as;
	
	printf("Enter Monthly Salary : ");
	scanf("%f",&ms);
	
	//Insurance premium (10%) = 0.1 * monthly salary
	ip = 0.1 * ms;
	
	//Loan installment (10%) = 0.1 * monthly salary
	li = 0.1 * ms;
	
	// Remaining Salary = ms - ip - li
	rs = ms - ip - li;
	
	//for annual salary = remaining salary * 12
	as = rs * 12;
	
	printf("Insurance Premium : %.2f",ip);
	printf("\nLoan Installment : %.2f",li);
	printf("\nRemaininf Salary : %.2f",rs);
	printf("\nAnnual Salary : %.2f",as);
	


}
