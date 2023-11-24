#include <stdio.h>
#include <string.h>

int countOccurrences(char str[], char word[]) {
    int count = 0;
    int wordLength = strlen(word);
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (strncmp(&str[i], word, wordLength) == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    char inputString[1000];
    char targetWord[] = "is";

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int occurrences = countOccurrences(inputString, targetWord);

    printf("Number of occurrences of the word 'is': %d\n", occurrences);

    return 0;
}
