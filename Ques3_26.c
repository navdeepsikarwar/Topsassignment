#include <stdio.h>

int main() {
    int n, sum = 0;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) {
        int innerSum = 0;
        for (int j = 1; j <= i; j++) {
            innerSum += j;
        }
        sum += innerSum;
    }

 
    printf("Sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+n) = %d\n", sum);

    return 0;
}
