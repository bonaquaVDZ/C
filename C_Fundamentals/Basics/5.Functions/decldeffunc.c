#include <stdio.h>

// Function declaration (prototype)
int addNumbers(int a, int b);

// Function definition
int subtractNumbers(int x, int y) {
    return x - y;
}

int main() {
    // Function call
    int sum = addNumbers(3, 5);
    printf("Sum: %d\n", sum);

    // Function call
    int difference = subtractNumbers(8, 3);
    printf("Difference: %d\n", difference);

    return 0;
}

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}
