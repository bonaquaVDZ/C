#include <stdio.h>

int main() {
    // Declaration and initialization of a 2D integer array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Printing the values of the 2D integer array
    printf("2D Integer Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%2d ", matrix[i][j]); // Using %2d to format the output
        }
        printf("\n");
    }

    return 0;
}
