#include <stdio.h>

int main() {
    int n,i,a=1,b=2;
    int term = 1;
    
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("%d %d ",a,b);
    
    for (i=3;i<=n;i++)
    {
    	if(i%2==1)
        {
            a=a*3;
            printf("%d ",a);
        }
        else
        {
            b=b*3;
            printf("%d ",b);
        }
	}
}

