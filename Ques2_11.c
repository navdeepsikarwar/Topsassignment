#include <stdio.h>

int main() {
    
    int number;

   
    printf("Enter a number: ");
    scanf("%d", &number);

    
    (number % 2 == 0) ? printf("%d is an even number.\n", number) : printf("%d is an odd number.\n", number);

    return 0;
}
