// This program prompts the user for a positive height and then prints a right-aligned pyramid of that height.
// It uses spaces and hashes (#) to create each row of the pyramid, where the number of hashes increases with each row.
// The `print_row` function is utilized to handle the printing of spaces and hashes for each row based on the row's position.
#include <cs50.h>
#include <stdio.h>

// Function prototype
void print_row(int space_count, int hash_count);

// main function
int main(void)
{
    int height;

    // Continue prompting until a positive number is entered
    do
    {
        height = get_int("Height: ");
    } while (height <= 0);

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
