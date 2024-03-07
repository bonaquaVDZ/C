// This program prints a right-aligned pyramid of a specified height using hashes (#) for each row.
// The height of the pyramid is input by the user, and each row has one more hash than the previous one.
// The `print_row` function is used to print each row of the pyramid based on the current iteration's length.
#include <cs50.h> // include -lcs50
#include <stdio.h>

// Function prototype
void print_row(int length);

// main function
int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        print_row(i + 1);
    }
}

// function definition
void print_row(int length) // void means nothing particular / no format
{
    for (int i = 0; i < length; i++)
    {
        printf("#");
    }
    printf("\n");
}
