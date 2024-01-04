#include<stdio.h>
#include<string.h>

int main()
{
	 char str[100];//declare string of size 100
	 int i=0;
 
 		printf("Enter the string : ");
 		gets(str);//accept string
 	
 		printf("String characters are : ");
 	while(str[i]!='\0')
 	{
    	printf("%c,",str[i]);
     	i++;
 	}

}
