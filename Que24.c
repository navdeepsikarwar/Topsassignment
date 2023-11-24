#include <stdio.h>
int main() {
    char id[10];        
    int hour;            
    double value, salary; 

    // Prompt user for employee ID
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &id);

    // Prompt user for working hours
    printf("\nInput the working hrs: ");
    scanf("%d", &hour);

    // Prompt user for hourly salary
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);

    // Calculate total salary
    salary = value * hour;

    // Print employee ID and salary
    printf("\nEmployees ID = %s\nSalary = rs. %.2lf\n", id, salary);

    return 0;
}
