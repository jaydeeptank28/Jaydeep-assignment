#include<stdio.h>
main(){
	int i;
	
	printf("Enter Student Number here : ");
	scanf("%d",&i);
	
	//if i need to give 5 apples each student than 5*number of student
    printf("Apples requied : %d",5*i);
}
