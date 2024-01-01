#include <stdio.h>

int main() {
    int i,j,n=1;

    for ( i=1;i<=5;i++) {    //to print 5 row
        for ( j=1;j<=10;j++) { //to print 10 column
            printf("%02d ",n++); //print 1 to 50 start from n=1 
        }
        printf("\n");//to print in new line
    }
}

