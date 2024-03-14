#include <stdio.h>
#include <string.h>
#include <errno.h>

int main() {
    // Attempt to open a file that doesn't exist in read mode
    FILE *file = fopen("nonexistent_file.txt", "r");

    // Check if the file opening was unsuccessful
    if (file == NULL) {
        // Print an error message using fprintf to the standard error stream (stderr)
        // The message includes the description of the error obtained from strerror(errno)
        fprintf(stderr, "Error opening file: %s\n", strerror(errno));

        // Return the error number (stored in errno) as the program's exit code
        return errno;
    }

    // Close the file if it was successfully opened
    fclose(file);

    // Return 0 to indicate successful execution
    return 0;
}
