#include<stdio.h>
main()
{
	float d,m;
	
	printf("Enter days : ");
	scanf("%f",&d);
	
	// for convert days into months = days/12
	m =d/30.45;
	
	printf("This is your approx month :%.2f",m);
}
