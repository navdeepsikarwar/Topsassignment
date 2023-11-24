#include <stdio.h>

int main() {
    
    float height;

    
    printf("Enter the height in centimeters: ");
    scanf("%f", &height);

    
    if (height >= 180.0) {
        printf("Tall person\n");
    } else if (height >= 160.0) {
        printf("Average height person\n");
    } else {
        printf("Short person\n");
    }

    return 0;
}
