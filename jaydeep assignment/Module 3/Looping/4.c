#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter a number to print table: ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++){
		printf("\n%d * %d = %d",n,i,n*i);
	}
}
