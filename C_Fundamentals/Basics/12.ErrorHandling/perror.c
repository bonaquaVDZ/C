#include <stdio.h>
#include <errno.h>

int main() {
    // Try to open a file that doesn't exist in read mode
    FILE *file = fopen("nonexistent_file.txt", "r");

    // Check if the file opening was unsuccessful
    if (file == NULL) {
        // Print an error message along with the description of the error
        perror("Error opening file");

        // Return the error number (stored in errno) as the program's exit code
        return errno;
    }

    // Close the file if it was successfully opened
    fclose(file);

    // Return 0 to indicate successful execution
    return 0;
}
