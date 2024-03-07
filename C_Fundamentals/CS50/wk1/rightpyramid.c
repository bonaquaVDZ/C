// This program asks the user for a positive integer height and prints a right-aligned pyramid of that height.
// Each row of the pyramid consists of a specific number of spaces followed by hashes, creating a step pattern.
// The `print_row` function is designed to handle printing for each row, adjusting spaces and hashes based on the row number.
#include <cs50.h>
#include <stdio.h>

// Function prototype
void print_row(int space_count, int hash_count);

// main function
int main(void)
{
    int height = get_int("Height: ");

    for (int i = 1; i <= height; i++)
    {
        // Call the function with the number of spaces and hashes for this row
        print_row(height - i, i);
    }
}

// Function to print one row of the pyramid
void print_row(int space_count, int hash_count)
{
    // First, print the spaces
    for (int i = 0; i < space_count; i++)
    {
        printf(" ");
    }

    // Then, print the hashes
    for (int j = 0; j < hash_count; j++)
    {
        printf("#");
    }

    // Move to the next line after printing spaces and hashes
    printf("\n");
}
