#include <stdio.h>

int main() {
    FILE *file_ptr;

    // Opening a file in write mode
    file_ptr = fopen("example.txt", "w");
    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Writing to the file
    fprintf(file_ptr, "Hello, world!\n");
    fprintf(file_ptr, "This is a sample file.\n");

    // Closing the file
    fclose(file_ptr);

    printf("Data written to file successfully!\n");

    return 0;
}
