#include<stdio.h>

main()
{
	int n1,n2,swap;
	
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	printf("\n\nSwapping Number With 3rd Variable\n");
	
	//for swapping number With 3rd variable
	swap=n1;
	n1=n2;
	n2=swap;
	
	printf("\nSwap Number n1 : %d",n1);
	printf("\nSwap Number n2 : %d\n",n2);
	
	printf("\n\nSwapping Number Without 3rd Variable\n");
	
	//for swapping number Without 3rd variable
	
	n1 = n1 + n2;    //n1 = 20 + 10 =30(n1) 
	n2 = n1 - n2;    //n2 = 30 - 10 =20(n2)
	n1 = n1 - n2;    //n1 = 30 - 20 =10(n1)
	
	printf("\nSwap Number n1 : %d",n1);
	printf("\nSwap Number n2 : %d",n2);
	
	
	
}
