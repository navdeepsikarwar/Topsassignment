#include <stdio.h>


int main() {
    // Declare variables
    float length, width;

    // Input from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area
    float area = (length * width);

    // Display the area
    printf("The area of the rectangle is: %f\n", area);

    return 0;
}
