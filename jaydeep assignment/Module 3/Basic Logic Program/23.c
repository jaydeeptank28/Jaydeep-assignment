#include<stdio.h>

main()
{
	int n1,n2;
	
	printf("Enter Number 1 : ");
	scanf("%d",&n1);
	printf("Enter Number 2 : ");
	scanf("%d",&n2);
	
	printf("\n\nSwapping Number With Multiplication anf Division\n");
	
	//swapping number from multiplication and divison

	n1 = n1 * n2;     //n1 = 10*20  =200
	n2 = n1 / n2;    // n2 = 200/10 =20(n2)
	n1 = n1 / n2;   //  n1 = 200/20 =10(n1)
	
	printf("\nSwap Number n1 : %d",n1);
	printf("\nSwap Number n2 : %d",n2);
}
