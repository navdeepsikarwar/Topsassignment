#include <stdio.h>

void reverseString(char str[], int start, int end) {
    if (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        reverseString(str, start + 1, end - 1);
    }
}

int main() {
    char inputString[100];

   
    printf("Enter a string: ");
    scanf("%s", inputString);

    
    int length = 0;
    while (inputString[length] != '\0') {
        length++;
    }

  
    reverseString(inputString, 0, length - 1);

    
    printf("Reversed string: %s\n", inputString);

    return 0;
}
