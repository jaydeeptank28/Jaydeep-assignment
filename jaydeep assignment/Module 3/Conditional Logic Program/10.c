#include<stdio.h>
main()
{
	int n;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	if(n>0) {
		printf("%d is Positive",n);
	}else if(n<0) {
		printf("%d is Negative",n);
	}else {
		printf("Number is Zero",n);
	}
	
}
