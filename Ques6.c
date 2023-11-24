#include <stdio.h>

int main() {
    // Declare variables
    float base, height;

    // Input from the user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate the area
    float area = triangle_area(base, height);

    // Display the area
    printf("The area of the triangle is: %f\n", area);

    return 0;
}
