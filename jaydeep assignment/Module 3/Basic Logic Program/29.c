#include<stdio.h>
void main(){
	float second,minute,hour;
	
	printf("Enter a Minutes : ");
	scanf("%f",&minute);
	
	//for convert mintues into seconds =minutes * 60
	second = minute * 60;
	printf("In %.2f minutes is %.2f seconds",minute,second);
	
	//for convert minutes into hour  = minute/60 
	hour = minute / 60;
	printf("\nIn %.2f minutes is %.2f hours",minute,hour);
	
}
