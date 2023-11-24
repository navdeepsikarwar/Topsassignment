#include <stdio.h>
int main() {
    // Declare variables
    float side;

    // Input from the user
    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    // Calculate the circumference
    float circumference = 4*(side);

    // Display the circumference
    printf("The circumference of the square is: %f\n", circumference);

    return 0;
}
