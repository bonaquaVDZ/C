#include <stdio.h>

// Function to modify array elements using pointers
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        // Increment each array element by 1
        (*arr)++;
        // Move to the next element in the array
        arr++;
    }
}

// Function to swap two integers using pointers
void swapIntegers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Pointers and arrays
    int numbers[] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    printf("Array elements using pointers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);
        // Move to the next element in the array
        ptr++;
    }
    printf("\n");

    // Reset the pointer to the beginning of the array
    ptr = numbers;

    // Pointers and functions
    int arraySize = 5;
    modifyArray(ptr, arraySize);

    printf("Modified array elements using pointers and function:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Pointers and functions for swapping integers
    int num1 = 10, num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapIntegers(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
