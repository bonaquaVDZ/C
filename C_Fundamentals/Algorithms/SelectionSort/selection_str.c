// In Selection Sort, the idea of the algorithm is to divide the array into a sorted and an unsorted part. 
// The sorted part is initially empty, and in each iteration, the minimum element from the unsorted part is selected and swapped with the first element of the unsorted part.
// O(n^2) Worst-case scenario: The array is in reverse order; we have to find the minimum for each element in the unsorted part, making n passes.
// Ω(n^2) Best-case scenario: Similar to the worst-case scenario, as the algorithm doesn't take advantage of any existing order in the array.


#include <stdio.h>
#include <string.h>

// Function to perform selection sort on an array of strings
void selection_sort_strings(char arr[][50], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            // Compare strings and find the index of the smallest string
            if (strcmp(arr[j], arr[min_index]) < 0) {
                min_index = j;
            }
        }
        // Swap the found minimum string with the first string
        char temp[50];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min_index]);
        strcpy(arr[min_index], temp);
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

    // Perform selection sort for strings
    selection_sort_strings(names, n);

    // Print the sorted array
    printf("Sorted array: ");
    print_string_array(names, n);

    return 0;
}
