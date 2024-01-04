#include <stdio.h>

int main() {
    int num, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

  
    while (num != 0) 
	{
        temp = num % 10;
        sum += temp;
        num /= 10;
    }

    printf("Summation : %d", sum);

}

