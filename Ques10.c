#include <stdio.h>


int main() {
    // Declare variables
    float length, width, height;

    // Input from the user
    printf("Enter the length of the rectangular prism: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangular prism: ");
    scanf("%f", &width);

    printf("Enter the height of the rectangular prism: ");
    scanf("%f", &height);

    // Calculate the surface area
    float area = 2*(length*width)+(height*length)+(height*width);

    // Display the surface area
    printf("The surface area of the rectangular prism is: %f\n", area);

    return 0;
}
