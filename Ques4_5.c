#include <stdio.h>

void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displayArray(int arr[], int size) {
    printf("Sorted Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size];

    printf("Enter %d elements of the first array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements of the second array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int choice;

    printf("Choose sorting order:\n");
    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSortAscending(arr1, size);
    } else if (choice == 2) {
        bubbleSortDescending(arr1, size);
    } else {
        printf("Invalid choice!\n");
        return 1; 
    }

    displayArray(arr1, size);

    
    if (choice == 1) {
        bubbleSortAscending(arr2, size);
    } else if (choice == 2) {
        bubbleSortDescending(arr2, size);
    }

    displayArray(arr2, size);

    return 0;
}
