#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int findIndex(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            printf("Number %d found at index %d\n", num, i);
            return i; // Return the index if found
        }
    }
    printf("Number not found.\n");
    return -1; // Return -1 if not found
}


int main(void)
{
    int size;
    printf("Enter the size of the array (should be greater than 1): ");
    while (scanf("%d", &size) != 1 || size <= 1) // Check for valid size input
    {
        printf("Invalid input. Please enter a positive integer greater than 1: ");
        while (getchar() != '\n')
            ; // Clear input buffer
    }

    // Dynamically allocate memory for an integer array of size 'size'
    int *numbers = (int *)malloc(size * sizeof(int));

    // Input array elements from the user
    printf("Enter %d numbers separated by spaces: ", size);
    for (int i = 0; i < size; i++)
    {
        while (scanf("%d", &numbers[i]) != 1) // Check for valid number input
        {
            printf("Invalid input. Please enter valid numbers.\n");
            // Clear input buffer
            while (getchar() != '\n')
                ;
            printf("Enter the number again: ");
        }
    }

    int user_input;
    printf("Enter a number to search: ");
    scanf("%d", &user_input);

    // Search for the index of the number
    findIndex(numbers, size, user_input);

    free(numbers); // Free dynamically allocated memory
    return 0;
}
