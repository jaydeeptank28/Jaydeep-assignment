#include <stdio.h>

int main() {
    int i,j,n;


    printf("Enter the value of n: ");
    scanf("%d", &n);


    for (i=1;i<=n;i++) 
	{
        printf("(");
        for (j=1;j<=i;j++)
		 {
            printf("%d", j);
            if (j < i) 
			{
                printf("+");
            }
        }
        printf(")");

        if (i < n)
		 {
            printf(" + ");
        }
    }

    printf("\n");
}

