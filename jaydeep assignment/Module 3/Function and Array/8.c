#include<stdio.h>
struct Employee
 {
 		int eno;
 		char ename[30];
 		char address[30];
 		int age;
 }A, E[3];
void main(){
		int i;
	 	A.eno=12;
	 	strcpy(A.ename,"Mr.Shukla");
	 	strcpy(A.address,"Ahmedabad");
	 	A.age=34;
	 	printf("Input Employee's No : ");
	 	scanf("%d",&A.eno);
		printf("Employee's  Name      : ");
		scanf("%s",&A.ename);
		printf("Employee's  Address    :  ");
		scanf("%s",&A.address);
		printf("Employee's  Age    :  ");
		scanf("%d",&A.age);
	 	for(i=0;i<5;i++){
	 		printf("\n................Employee [%d]...........",i+1);
	 		printf("\nEmployee No [%d] : ",i+1);
			scanf("%d",&E[i].eno);
			printf("Employee's  Name : ");
			scanf("%s",&E[i].ename);
			printf("Employee's  Address :  ");
			scanf("%s",&E[i].address);
			printf("Employee's Age :  ");
			scanf("%d",&E[i].age);		
		}	
		for(i=0;i<5;i++){
	 		printf("\n................Employee [%d]...........",i+1);
	 		printf("\nEmployee No [%d] :  %d",E[i].eno);
			printf("\nEmployee's Name : %s",E[i].ename);
			printf("\nEmployee's Address :  %s",E[i].address);
			printf("\nEmployee's Age :  %d",E[i].age);		
		}	
}

