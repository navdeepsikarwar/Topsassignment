#include <stdio.h>

int main() {
    
    int num1, num2, sum;

        printf("Enter the first number: ");
    scanf("%d", &num1);

    
    printf("Enter the second number: ");
    scanf("%d", &num2);

    
    sum = num1 + num2;

    
    printf("Sum: %d\n", sum);

    
    if (sum > 0) {
        printf("The sum is a positive number.\n");
    } else if (sum < 0) {
        printf("The sum is a negative number.\n");
    } else {
        printf("The sum is zero.\n");
    }

    return 0;
}
