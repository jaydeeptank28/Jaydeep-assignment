#include<stdio.h>
main()
{
	int choice;
	float totalbill=0,quantity;
	
	//Print Menu 
	printf("\t*****MENU*****\n\n");
	while(1) {
	printf("1. Pizza      Price = 180rs/pcs\n");
	printf("2. Burger     Price = 100rs/pcs\n");
	printf("3. Dosa       Price = 120rs/pcs\n");
	printf("4. Idli       Price = 50rs/pcs\n");
	printf("5. Exit\n");
	
	printf("Enter Your Choice(1-5) : ");
	scanf("%d",&choice);
	
	if (choice == 5) {
        printf("Exiting the menu. Your total bill is rs%.2f. Thank you!\n", totalbill); // exit the program
        break;
		}
        
	printf("Enter Quantity : ");
	scanf("%f",&quantity);
	
	switch(choice)
	{
		case 1:
			totalbill+=quantity*180;
			printf("You chose %.2f Pizza(s). Price: rs%.2f\n", quantity, quantity*180);
            break;
            
        case 2:
			totalbill+=quantity*100;
			printf("You chose %.2f Burger(s). Price: rs%.2f\n", quantity, quantity*100);
            break;
            
        case 3:
			totalbill+=quantity*120;
			printf("You chose %.2f Dosa(s). Price: rs%.2f\n", quantity, quantity*120);
            break;
            
        case 4:
			totalbill+=quantity*50;
			printf("You chose %.2f Idli(s). Price: rs%.2f\n", quantity, quantity*50);
            break;
            
        default :
			printf("Invalid choice. Please enter a number between 1 and 5.\n");
            break;
            
	}
	    printf("Do you want to order more? (1 for Yes, 0 for No): ");
        scanf("%f", &choice);

        if (choice == 0) {
            printf("Your total bill is rs%.2f. Thank you!\n", totalbill);
            break; // exit the loop
        }
	}
	
}
