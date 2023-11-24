#include <stdio.h>

int main() {
    int count = 1;  
    int sum = 0;    
    int number;

    
    while (count <= 10) {
        printf("Enter number %d: ", count);
        scanf("%d", &number);

        sum += number;
        count++;
    }

   
    printf("Sum of the 10 numbers is: %d\n", sum);

    return 0;
}
