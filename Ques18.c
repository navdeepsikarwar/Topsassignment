#include <stdio.h>

// Function to calculate annual salary
float calculateAnnualSalary(float monthlySalary) {
    return monthlySalary * 12;
}

int main() {
    // Declare variables
    float monthlySalary, annualSalary;

    // Input from the user
    printf("Enter the person's monthly salary: ");
    scanf("%f", &monthlySalary);

    // Check for negative monthly salary
    if (monthlySalary < 0) {
        printf("Invalid input. Monthly salary cannot be negative.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the annual salary
    annualSalary = calculateAnnualSalary(monthlySalary);

    // Display the result
    printf("The person's annual salary is: %.2f\n", annualSalary);

    return 0;
}
