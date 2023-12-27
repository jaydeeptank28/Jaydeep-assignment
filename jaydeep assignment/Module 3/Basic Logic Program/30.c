#include<stdio.h>
void main(){
	float year,days;
	
	printf("Enter a year : ");
	scanf("%f",&year);
	
	//for convert year into days =year * 365
	days= year*365;
	printf("In %.2f years is %.2f days",year,days);
	
	printf("\nEnter a days : ");
	scanf("%f",&days);
	
	//for convert days into year =days / 365
	year=days/365;
	printf("In %.2f days is %.2f year",days,year);
	
}
