#include <stdio.h>

int main() {
    // Arithmetic operators
    int a = 10, b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    float quotient = (float)a / b;  // Casting to float for accurate division
    int remainder = a % b;

    // Relational operators
    printf("Relational Operators:\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d < %d : %d\n", a, b, a < b);
    printf("%d > %d : %d\n", a, b, a > b);
    printf("%d <= %d : %d\n", a, b, a <= b);
    printf("%d >= %d : %d\n", a, b, a >= b);

    // Logical operators
    printf("\nLogical Operators:\n");
    int x = 1, y = 0;
    printf("%d && %d : %d\n", x, y, x && y);
    printf("%d || %d : %d\n", x, y, x || y);
    printf("!%d : %d\n", x, !x);

    // Display results of arithmetic operations
    printf("\nArithmetic Operators:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Remainder: %d\n", remainder);

    return 0;
}
