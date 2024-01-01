#include<stdio.h>

fun() {
	
		int num1,num2;
        int choice;
        
	printf("Choose (1-4)\n");
	printf("1.  Addition \n");
	printf("2.  Substraction \n");
	printf("3.  Multipliction \n");
	printf("4.  Dividation \n\n");

	printf("Enter Number 1 : ");
    scanf("%d",&num1);
        
    printf("Enter Number 2 : ");
    scanf("%d",&num2);
    
	printf("\nEnter Choice(1-4) : ");
    scanf("%d",&choice);
    
        
	switch(choice){
		
	    case 1:
            printf("\nAddition Result : %d \n",num1+num2);
            break;
            
        case 2:
            printf("\nSubstraction Result : %d \n",num1-num2);
            break;
            
            case 3:
            printf("\nMultiplication Result: %d \n",num1*num2);
            break;
            
        case 4:
            printf("\nDivision Result: %d \n",num1/num2);
            break;
            
        default:
        	printf("Invalid Input");
        	break;
        	
        
	}
}
	

main(){
	fun();
}
