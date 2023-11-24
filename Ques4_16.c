#include <stdio.h>

int main() {
    int numbers[5];

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
