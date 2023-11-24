#include <stdio.h>

int main() {
    // Declare variables
    int numberOfStudents;

    // Input from the user
    printf("Enter the number of students: ");
    scanf("%d", &numberOfStudents);

    // Calculate the total number of apples
    int totalApples = numberOfStudents * 5;

    // Display the result
    printf("Total number of apples required: %d\n", totalApples);

    return 0;
}
