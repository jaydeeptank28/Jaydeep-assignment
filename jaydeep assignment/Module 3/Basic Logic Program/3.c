#include<stdio.h>
main(){
	float radious;
	printf("Enter radious of circle :");
	scanf("%f",&radious);
	
	//Area of circle= (pi * r^2)
	printf("Area of circle %.2f:",3.14*radious*radious);
	
	//Circumference=(2 * pi * r)
	printf("Circumference of circle %.2f:",2*3.14*radious);
}
