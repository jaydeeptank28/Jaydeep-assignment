#include <stdio.h> 

int main() 
{ 
	int i,j;

	for (i=0; i<6;i++)
	 { 
 
		for (j=0;j<=i;j++) { 
			printf(" *", j); 
		} 
		printf("\n"); 
	} 
	
	   for (i=0;i<6; i++) { 
  
        for (j = 0;j < 5-i; j++) { 
            printf(" *", j + 1); 
        } 
        printf("\n"); 
    } 
}

