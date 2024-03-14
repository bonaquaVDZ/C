#include <stdio.h>

int main() {
    FILE *file_ptr;

    // Opening a file in write mode
    file_ptr = fopen("example.txt", "w");
    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("File opened successfully!\n");

    // Closing the file
    fclose(file_ptr);
    printf("File closed successfully!\n");

    return 0;
}
