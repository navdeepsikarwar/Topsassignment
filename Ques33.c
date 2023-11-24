#include <stdio.h>

int main() {
    
    int base, power1, power2, power3;

    
    printf("Enter an integer: ");
    scanf("%d", &base);

    
    power1 = base;
    power2 = base * base;
    power3 = base * base * base;

    
    printf("First power (%d^1): %d\n", base, power1);
    printf("Second power (%d^2): %d\n", base, power2);
    printf("Third power (%d^3): %d\n", base, power3);

    return 0;
}
