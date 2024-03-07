#include <stdio.h>

int main() {
    // Example of a for loop
    // Use a for loop when the number of iterations is known before entering the loop.
    printf("For Loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // Example of a while loop
    // Use a while loop when the number of iterations is not known before entering the loop and depends on a condition.
    printf("\nWhile Loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    // Example of a do-while loop
    // Use a do-while loop when you want to ensure that the loop body executes at least once, regardless of the condition.
    printf("\nDo-While Loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n");

    return 0;
}

