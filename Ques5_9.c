#include <stdio.h>

int findMaxLength(char str[]) {
    int maxLength = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        maxLength++;
    }

    return maxLength;
}

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int maxLength = findMaxLength(inputString);

    printf("Maximum number of characters in the string: %d\n", maxLength);

    return 0;
}
