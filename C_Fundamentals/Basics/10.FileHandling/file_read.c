#include <stdio.h>

int main() {
    FILE *file_ptr;
    char buffer[100];

    // Opening a file in read mode
    file_ptr = fopen("example.txt", "r");
    if (file_ptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Reading from the file
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s\n", buffer);
    }

    // Closing the file
    fclose(file_ptr);

    return 0;
}
