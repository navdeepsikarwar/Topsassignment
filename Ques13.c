#include <stdio.h>

int main() {
    // Declare variables
    int asciiCode;

    // Input from the user
    printf("Enter the ASCII code: ");
    scanf("%d", &asciiCode);

    // Convert ASCII code to character and display
    printf("The character for ASCII code %d is: %c\n", asciiCode, (char)asciiCode);

    return 0;
}
