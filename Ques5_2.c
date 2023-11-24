#include <stdio.h>

void separateCharacters(char str[]) {
    printf("Individual characters from the string:\n");

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
}

int main() {
    char inputString[100];

    
    printf("Enter a string: ");
    scanf("%s", inputString);

    
    separateCharacters(inputString);

    return 0;
}
