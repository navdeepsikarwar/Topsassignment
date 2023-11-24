#include <stdio.h>
#include <string.h>

void findLargestSmallestWords(char str[]) {
    char word[50]; 
    char smallestWord[50], largestWord[50];
    int i, j, length;
    int smallestLength = 50, largestLength = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            word[j] = '\0';

            length = strlen(word);

            if (length > 0) {
                if (length < smallestLength) {
                    smallestLength = length;
                    strcpy(smallestWord, word);
                }
                if (length > largestLength) {
                    largestLength = length;
                    strcpy(largestWord, word);
                }
            }
            j = 0;
        } else {
            word[j++] = str[i];
        }
    }

    word[j] = '\0';

    length = strlen(word);

    if (length > 0) {
        if (length < smallestLength) {
            strcpy(smallestWord, word);
        }
        if (length > largestLength) {
            strcpy(largestWord, word);
        }
    }

    printf("Smallest Word: %s\n", smallestWord);
    printf("Largest Word: %s\n", largestWord);
}

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    findLargestSmallestWords(inputString);

    return 0;
}
