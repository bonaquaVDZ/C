#include <stdio.h>

int main() {
    // Example of using break statement
    // Use break to exit a loop prematurely based on a certain condition.
    printf("Break Statement:\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Exit the loop when i equals 3
        }
        printf("%d ", i);
    }
    printf("\n");

    // Example of using continue statement
    // Use continue to skip the rest of the loop body and move to the next iteration based on a certain condition.
    printf("\nContinue Statement:\n");
    for (int j = 1; j <= 5; j++) {
        if (j == 3) {
            continue;  // Skip the iteration when j equals 3
        }
        printf("%d ", j);
    }
    printf("\n");

    return 0;
}
