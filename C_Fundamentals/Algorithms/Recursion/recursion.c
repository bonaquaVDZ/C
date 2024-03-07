#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Input from the user
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the input is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;  // Exit with an error code
    }

    // Calculate and display the factorial of the input
    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}
