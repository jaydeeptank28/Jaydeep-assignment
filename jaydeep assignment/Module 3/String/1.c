#include <stdio.h>

int main() {
    char inputString[100];  // Assuming a maximum length of 100 characters
    int length = 0;

    printf("Enter a string: ");
    gets(inputString);

    // Iterate through the string until null terminator is encountered
    while (inputString[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);
}

