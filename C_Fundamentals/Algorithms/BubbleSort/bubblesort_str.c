#include <stdio.h>
#include <string.h>

// Function to perform bubble sort on an array of strings
void bubble_sort_strings(char arr[][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compare strings and swap if the current string is greater than the next string
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[50];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

// Function to print an array of strings
void print_string_array(char arr[][50], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Array of strings
    char names[][50] = {"Frank", "Eva", "Charlie", "David", "Bob", "Alice"};

    // Calculate the size of the array
    int n = sizeof(names) / sizeof(names[0]);

    // Print the original array
    printf("Original array: ");
    print_string_array(names, n);

    // Perform bubble sort for strings
    bubble_sort_strings(names, n);

    // Print the sorted array
    printf("Sorted array: ");
    print_string_array(names, n);

    return 0;
}
