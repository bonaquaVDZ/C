#include <stdio.h>

// global constants
#define PI 3.14159
char MY_GLOBAL_VARIABLE = 'A';

int main() {

    // Constants (read-only variables)
    const int DAYS_IN_WEEK = 7;  // Represents the number of days in a week
    const double GRAVITY = 9.8;  // Represents the acceleration due to gravity

    // Printing the values of constants
    printf("Days in a week: %d\n", DAYS_IN_WEEK);
    printf("Gravity: %.2f m/s^2\n", GRAVITY);  // %.2f specifies two digits after the decimal point
    printf("Value of PI: %.5f\n", PI);
    printf("My global variable: %c\n", MY_GLOBAL_VARIABLE);

    return 0;
}
