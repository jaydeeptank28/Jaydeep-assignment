#include <stdio.h>

int main() {
    int a1,a2,a3;

    printf("Enter the first angle: ");
    scanf("%d", &a1);

    printf("Enter the second angle: ");
    scanf("%d", &a2);

    printf("Enter the third angle: ");
    scanf("%d", &a3);

    // Check if a triangle can be formed
    
    if (a1+a2+a3 == 180 && a1>0 && a2>0 && a3>0) 
	{
        printf("A triangle can be formed with the given angles.\n");
    } 
	else 
	{
        printf("A triangle cannot be formed with the given angles.\n");
    }

}

