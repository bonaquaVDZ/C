#include <stdio.h>

int main() {
    // Declare and initialize variables
    int number = 42;
    double pi = 3.14159;

    // Declare pointers
    int *intPointer;
    double *doublePointer;

    // Assign addresses of variables to pointers
    intPointer = &number;
    doublePointer = &pi;

    // Accessing values through pointers
    printf("Value of number: %d\n", *intPointer);
    printf("Value of pi: %f\n", *doublePointer);

    // Pointer arithmetic with integers
    int arrInt[] = {10, 20, 30, 40, 50};
    int *intArrPointer = arrInt;

    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(intArrPointer + i));
    }

    // Pointer arithmetic with doubles
    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double *doubleArrPointer = arrDouble;

    printf("\nDouble array elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %f\n", i, *(doubleArrPointer + i));
    }

    // Increment and decrement pointers
    int *incrementedPointer = intArrPointer + 2;
    double *decrementedPointer = doubleArrPointer - 1;

    printf("\nIncremented pointer value: %d\n", *incrementedPointer);
    printf("Decremented pointer value: %f\n", *decrementedPointer);

    return 0;
}
