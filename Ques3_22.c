#include <stdio.h>


int isPalindrome(int num) {
    int originalNum = num, reversedNum = 0, remainder;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int numbers[3];

   
    int i = 0;
    while (i < 3) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        i++;
    }

    
    for (int i = 0; i < 3; i++) {
        if (isPalindrome(numbers[i])) {
            printf("%d is a palindrome.\n", numbers[i]);
        } else {
            printf("%d is not a palindrome.\n", numbers[i]);
        }
    }

    return 0;
}
