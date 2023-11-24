#include <stdio.h>

void combineStrings(char str1[], char str2[], char result[]) {
    int i, j;

    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }

    result[i + j] = '\0';
}

int main() {
    char firstString[100], secondString[100], combinedString[200];

    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    combineStrings(firstString, secondString, combinedString);

    printf("Combined string: %s", combinedString);

    return 0;
}
