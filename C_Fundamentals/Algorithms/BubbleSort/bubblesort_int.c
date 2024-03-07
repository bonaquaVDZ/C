// In bubble sort, the idea of the algorithm is to move higher valued elements generally towards the right and lower value elemenets generally towards left. 
// O(n^2) Worse-case scenario: The array in reverse order; we have to "bubble" each of the n elements all the way across the array, and since we can only fully bubble one element into position per pass, we must do this n times.
// Ω(n) Best-case scenario: The array is already perfectly sorted, and we make no swaps on the first pass.

#include <stdio.h>

// Function to perform bubble sort on an array
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print an array
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Array of numbers
    int numbers[] = {64, 25, 12, 22, 11};

    // Calculate the size of the array
    int n = sizeof(numbers) / sizeof(numbers[0]);

    // Print the original array
    printf("Original array: ");
    print_array(numbers, n);

    // Perform bubble sort
    bubble_sort(numbers, n);

    // Print the sorted array
    printf("Sorted array: ");
    print_array(numbers, n);

    return 0;
}
