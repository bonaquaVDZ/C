/**
 * @file main.c
 * @brief A program to search for a number in an array.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * @brief Search for the index of a number in the array.
 *
 * This function iterates through the array to find the index of a given number.
 * If the number is found, its index is printed; otherwise, a message is printed
 * indicating that the number was not found.
 *
 * @param arr The array of integers to search.
 * @param size The size of the array.
 * @param num The number to search for.
 * @return The index of the number if found, otherwise -1.
 */
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

/**
 * @brief Main function to execute the program.
 *
 * This function prompts the user to enter the size of an array and the elements
 * of the array. It then prompts the user to enter a number to search for in the array.
 * The index of the number is printed if found; otherwise, a message is printed.
 *
 * @return 0 upon successful execution, non-zero otherwise.
 */
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
