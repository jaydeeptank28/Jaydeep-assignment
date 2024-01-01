#include <stdio.h>

int main() {
    int n,d;
    int rn= 0;
    
    printf("Enter Number : ");
    scanf("%d",&n);
    
    printf("Original number: %d\n",n);
    
    while (n>0) 
	{
        d = n % 10;
        rn= (rn*10)+d;
        n=n/10;
    }

    printf("Reversed number: %d\n",rn);
}

