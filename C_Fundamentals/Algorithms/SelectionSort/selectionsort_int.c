// In Selection Sort, the idea of the algorithm is to divide the array into a sorted and an unsorted part. 
// The sorted part is initially empty, and in each iteration, the minimum element from the unsorted part is selected and swapped with the first element of the unsorted part.
// O(n^2) Worst-case scenario: The array is in reverse order; we have to find the minimum for each element in the unsorted part, making n passes.
// Ω(n^2) Best-case scenario: Similar to the worst-case scenario, as the algorithm doesn't take advantage of any existing order in the array.

#include <stdio.h>

// Function to perform selection sort on an array of integers
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Function to print an array of integers
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Array of integers
    int numbers[] = {64, 25, 12, 22, 11};

    // Calculate the size of the array
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Print the original array
    printf("Original array: ");
    print_array(numbers, n);

    // Perform selection sort for integers
    selection_sort(numbers, n);

    // Print the sorted array
    printf("Sorted array: ");
    print_array(numbers, n);

    return 0;
}


