#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter Number of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("(%d*%d)",i,i);
	
	if(i<n){
		printf(" + ");
	}
}
}
