#include <stdio.h>

int main() {
    int number, originalNumber;
    unsigned long long factorial = 1;

    
    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    originalNumber = number;

   
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
       
        while (number > 1) {
            factorial *= number;
            --number;
        }

        
        printf("Factorial of %d = %llu\n", originalNumber, factorial);
    }

    return 0;
}
