#include<stdio.h>

largest()
{
	int a[5],i,max;
	
	for(i=0;i<5;i++){
		printf("Enter Number : ");
		scanf("%d",&a[i]);
	}
	
	 // Loop to find the maximum element in the array
	 
	 for (i=1;i<5;i++)
	  {
        if (a[i]>max)
		{
            max = a[i];
        }
    }
    printf("Largest Number is : %d",max);
}


main()
{
    largest();
}
