#include <stdio.h>

// Function declaration with parameters and return type
int multiply(int x, int y);

int main() {
    // Function call with arguments (5 and 3)
    int result = multiply(5, 3);

    // Print the result returned by the function
    printf("Result: %d\n", result);

    return 0;
}

// Function definition with parameters and return type
// This function multiplies two integers and returns the result
int multiply(int x, int y) {
    // Local variable to store the result of multiplication
    int product = x * y;

    // Return the result to the calling function
    return product;
}
