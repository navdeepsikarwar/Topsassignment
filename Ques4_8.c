#include <stdio.h>
#include <string.h>


void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }
}

int isPalindrome(char str[]) {
    char originalStr[100];
    strcpy(originalStr, str); 
    reverseString(str);

    return strcmp(originalStr, str) == 0;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    if (isPalindrome(inputString)) {
        printf("The original string is a palindrome.\n");
    } else {
        printf("The original string is not a palindrome.\n");
    }

    return 0;
}
