#include <stdio.h>

unsigned long long calculateFactorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * calculateFactorial(num - 1);
    }
}

int main() {
    int numbers[5];

    
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    printf("\nFactorials of the entered numbers are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Factorial of %d = %llu\n", numbers[i], calculateFactorial(numbers[i]));
    }

    return 0;
}
