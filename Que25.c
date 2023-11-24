#include <stdio.h>

int main() {
    float expenses[5], totalExpense = 0, averageExpense;

    printf("Enter 5 expenses:\n");

    for (int i = 0; i < 5; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);

       
        totalExpense += expenses[i];
    }

   
    averageExpense = totalExpense / 5;


    printf("\nExpense Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Expense %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}
