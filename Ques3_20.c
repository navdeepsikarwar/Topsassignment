#include <stdio.h>

int main() {
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            
            printf("%02d ", (i - 1) * 10 + j);
        }
        printf("\n");
    }

    return 0;
}
