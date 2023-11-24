#include <stdio.h>

int main() {
    int limit;

    
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

   
    int a = 0, b = 1, nextTerm;

    printf("Fibonacci series up to %d terms:\n", limit);
    printf("%d, %d", a, b);

    for (int i = 2; i < limit; i++) {
        nextTerm = a + b;
        printf(", %d", nextTerm);
        a = b;
        b = nextTerm;
    }

    printf("\n");

    return 0;
}
