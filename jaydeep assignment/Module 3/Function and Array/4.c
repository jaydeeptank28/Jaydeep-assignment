#include <stdio.h>

int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 1)
	{
        return 1;
    } else 
	{
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input from the user
    printf("Enter a Number to Find Factorial  : ");
    scanf("%d", &num);


    printf("\nFactorial of %d = %d", num, factorial(num));

}

