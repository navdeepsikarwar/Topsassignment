#include <stdio.h>


int main() {
    // Declare variables
    float length, width;

    // Input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the perimeter
    float perimeter = 2 *(length + width);

    // Display the perimeter
    printf("The perimeter of the rectangle is: %f\n", perimeter);

    return 0;
}
