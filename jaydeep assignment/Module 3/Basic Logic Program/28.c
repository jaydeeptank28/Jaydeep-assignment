#include<stdio.h>
void main(){
	float days,month,year;
	
	printf("Enter a year :");
	scanf("%f",&year);
	
	//for convert year into days =year * 365
	days= year*365;
	printf("In %.2f years is %.2f days",year,days);
	
	//for convert year into months = year *12
	month=year*12;
	printf("\nIn %.2f years is %.2f month",year,month );
	
}
