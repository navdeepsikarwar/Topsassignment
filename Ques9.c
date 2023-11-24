#include <stdio.h>


int main() {
    
    float a, b, c;

    // Input from the user
    printf("Enter the length of side 'a' of the triangle: ");
    scanf("%f", &a);

    printf("Enter the length of side 'b' of the triangle: ");
    scanf("%f", &b);

    printf("Enter the length of side 'c' of the triangle: ");
    scanf("%f", &c);

    // Calculate the perimeter
    float perimeter = a+b+c;

    // Display the perimeter
    printf("The perimeter of the triangle is: %f\n", perimeter);

    return 0;
}
