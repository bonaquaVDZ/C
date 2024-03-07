// In Merge Sort, the idea of the algorithm is to divide the array into two halves, recursively sort each half, and then merge the sorted halves.
// This algorithm takes advantage of the fact that it is easier to merge two sorted arrays than to sort an unsorted array.
// O(n log n) Worst-case and Best-case scenario: The array is divided in log n levels, and at each level, n elements are merged.

#include <stdio.h>


// Function to merge two halves of an array of integers
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Function to perform Merge Sort on an array of integers
void merge_sort(int arr[], int left, int right) {
    if (left < right) {
        // Same as (left + right) / 2, but avoids overflow for large left and right
        int mid = left + (right - left) / 2;

        // Recursive call to sort the first and second halves
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
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

    // Perform Merge Sort
    merge_sort(numbers, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    print_array(numbers, n);

    return 0;
}
