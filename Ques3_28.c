#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    int term = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", term);
        
        if (i % 2 == 0) {
            term *= 2;
        } else {
            term *= 3;
        }
    }

    printf("\n");

    return 0;
}
