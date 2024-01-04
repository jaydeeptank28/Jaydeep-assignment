#include <stdio.h>

int main() {
    int num, max,temp;

    printf("Enter a number: ");
    scanf("%d", &num);



    while (num > 0) 
	{
        temp= num % 10;
        if (temp > max) 
		{
            max = temp;
        }
            num /= 10;
    }
    
    printf("Max number is %d\n",max);

}

