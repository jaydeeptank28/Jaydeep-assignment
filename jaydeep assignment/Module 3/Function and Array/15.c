#include <stdio.h>
void main (){
    int num[5];
    int i, j, a;
    
    for (i = 0; i < 5; i++)
	{
    	printf("Enter Numbers :");
        scanf("%d", &num[i]);
	}
    
    //Asending order
    for (i = 0; i < 5; i++){
        for (j = i + 1; j < 5; j++){
            if (num[i] > num[j]){
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    
   
    printf("The numbers in ascending order is:\n");
    for (i = 0; i < 5; i++)
	{
        printf("%d\n", num[i]);
    }
}
