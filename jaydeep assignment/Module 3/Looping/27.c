#include <stdio.h>

int main() {
    int n,i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    
    for (i=1;i<=n;i++) {
        int numerator = i;
        int denominator = i + 1;

        if (i % 2 == 1) {
            printf(" + %d/%d", numerator, denominator);
        } else {
            printf(" - %d/%d", numerator, denominator);
        }
    }

    printf("\n");

}

