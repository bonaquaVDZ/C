#include <stdio.h>

// Global variable with file scope
int globalVariable = 10;

int main() {
    // Local variable with function scope
    int localVariable = 5;

    // Block scope (if statement)
    if (1) {
        int blockVariable = 20;

        // Accessing global and local variables
        printf("Inside block: Global=%d, Local=%d, Block=%d\n", globalVariable, localVariable, blockVariable);
    }

    // Attempting to access blockVariable outside its scope will result in a compilation error

    // Accessing global and local variables
    printf("Outside block: Global=%d, Local=%d\n", globalVariable, localVariable);

    // Redefining localVariable
    localVariable = 15;

    // Accessing the redefined localVariable
    printf("Redefined Local=%d\n", localVariable);

    // Using the globalVariable after redefining a local variable with the same name
    printf("Global=%d\n", globalVariable);

    return 0;
}
