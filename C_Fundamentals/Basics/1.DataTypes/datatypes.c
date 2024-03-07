#include <stdio.h>

int main() {
    // Declaration (no initialization) of an integer variable
    int integerVariable;  // Store whole numbers (positive, negative, or zero)

    // Initialization of a float variable
    float floatVariable = 3.14f;  // Store decimal numbers with single precision

    // Declaration and initialization of a double variable
    double doubleVariable = 2.71828;  // Store decimal numbers with double precision

    // Declaration and initialization of a character variable
    char charVariable = 'A';  // Store a single character

    // Print values using printf
    printf("Integer: %d\n", integerVariable); // Note: The value of uninitialized variable is undefined
    printf("Float: %f\n", floatVariable);
    printf("Double: %lf\n", doubleVariable);
    printf("Character: %c\n", charVariable);

    return 0;
}
