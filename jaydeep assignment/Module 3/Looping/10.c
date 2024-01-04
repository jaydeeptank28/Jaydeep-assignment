 #include <stdio.h>

int main() {
    int num, first, last, sum=0;


    printf("Enter a number: ");
    scanf("%d", &num);
    
 // Find the last digit
    last = num % 10;

    // Find the first digit
    while (num >= 10) 
	{
        num /= 10;
    }
    first = num;

    // Calculate the sum
    sum = first + last;

   
    printf("Summation of the first and lastNumber is: %d\n", sum);

}

