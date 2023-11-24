#include <stdio.h>

int main() {
    
    float num1, num2, result;
    char operator;

   
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  

    printf("Enter the second number: ");
    scanf("%f", &num2);

   
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is undefined.\n");
            }
            break;
        case '%':
            // Check if the second number is not zero
            if (num2 != 0) {
                result = (int)num1 % (int)num2;
                printf("%.2f %% %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error: Modulo by zero is undefined.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
