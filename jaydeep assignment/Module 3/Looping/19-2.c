#include<stdio.h>
main()
{
	char i,j,ch=65;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++)
	{
		printf(" %c",ch++);
		 
	}
	printf("\n");  //To print pattern in next line
}
}
