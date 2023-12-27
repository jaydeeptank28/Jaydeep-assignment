#include <stdio.h>

int main() 
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate and print the first three powers
    printf("\nFirst three powers of %d\n", n);
    printf("%d to the power of 1: %d\n", n, n);
    printf("%d to the power of 2: %d\n", n, n * n);
    printf("%d to the power of 3: %d\n", n, n * n * n);

}

