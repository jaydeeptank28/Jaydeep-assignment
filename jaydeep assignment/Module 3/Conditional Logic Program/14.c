#include<stdio.h>
main()
{
	int n1,n2,n3;
	
	printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Enter the third number: ");
    scanf("%d", &n3);
    
  if(n1>n2){
  	if(n1>n3){
  		printf("\nFirst Number is Largest");
	  }else {
	  	printf("\nThird Number is Largest");
	  }
  }else{
  	if(n2>n3){
  		printf("\nSecond Number is Largest");
	  }else{
	  	printf("\nThird Number is Largest");
	  }
  }  
} 






