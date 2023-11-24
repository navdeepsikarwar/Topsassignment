#include <stdio.h>

int main() {
    // Declare variables
    char character;

    // Input from the user
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Display the ASCII code of the character
    printf("The ASCII code for '%c' is: %d\n", character, character);

    return 0;
}
