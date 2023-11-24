#include <stdio.h>


void extractSubstring(char str[], int start, int length) {
    char substring[100]; 

    
    for (int i = 0; i < length && str[start + i] != '\0'; i++) {
        substring[i] = str[start + i];
        substring[i + 1] = '\0'; 
    }

    printf("Substring: %s\n", substring);
}

int main() {
    char inputString[1000];
    int start, length;

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter the starting index for the substring: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    
    extractSubstring(inputString, start, length);

    return 0;
}
