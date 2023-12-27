#include<stdio.h>
main(){
	float base,height;
	
	printf("Enter the Base of Triangle here :");
	scanf("%f",&base);
	
	printf("Enter the Height of Triangle here :");
	scanf("%f",&height);
	
	//Area of Triangle = 1/2 * base * height 
	printf("The area of Triangle : %.2f",0.5*base*height);
}
