// In the linear search, the idea of the algorithm is to iterate across the array from left to right, searching for a specified element. 
// O(n) Worst-case scenario: We have to look through the entire arrays of n elements, either because the traget element is the last element of the array or doesn't exist in the array at all
// Ω(1) Best-case scenario: The target element is the first element of the array, so we can stop looking immediately after we start.


#include <stdio.h>

int main(void)
{
    // Number of arrays
    int numbers[] = {1, 3, 10, 20, 14, 22};

    // Input from user
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Find the index of the number
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        if (numbers[i] == user_input)
        {
            printf("The index of %d is %d\n", user_input, i);
            break;
        }
    }
    printf("Number %d wasn't found.\n", user_input);
}