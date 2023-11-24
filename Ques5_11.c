#include <stdio.h>

void swapCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
}

int main() {
    char inputSentence[1000];

    printf("Enter a sentence: ");
    fgets(inputSentence, sizeof(inputSentence), stdin);

   
    swapCase(inputSentence);

    printf("Modified sentence: %s\n", inputSentence);

    return 0;
}
