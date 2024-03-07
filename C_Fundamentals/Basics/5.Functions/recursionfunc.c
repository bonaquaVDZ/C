#include <stdio.h>

// Recursive function: A function that calls itself, either directly or indirectly,
// to solve a smaller instance of the same problem, until a base case is reached.


// Function declaration for a recursive function
int factorial(int n);

int main() {
    // Input from user
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and display the factorial of the input
    unsigned long long result = factorial(num);
    printf("Factorial of %d = %llu\n", num, result);

    return 0;
}

// Recursive function to calculate the factorial of a number
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0 || n == 1) {
        return 1;
    }

    // Recursive case: n! = n * (n-1)!
    return n * factorial(n - 1);
}
