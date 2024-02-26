// In the linear search, the idea of the algorithm is to iterate across the array from left to right, searching for a specified element. 
// O(n) Worst-case scenario: We have to look through the entire arrays of n elements, either because the traget element is the last element of the array or doesn't exist in the array at all
// Ω(1) Best-case scenario: The target element is the first element of the array, so we can stop looking immediately after we start.

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Array of strings
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank"};

    // Input from user
    char user_input[50];
    printf("Enter a name: ");
    scanf("%s", user_input);

    // Find the index of the name
    int found_index = -1;  // Initialize to -1, indicating not found
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
    {
        // Compare the input name with each element in the array
        if (strcmp(names[i], user_input) == 0)
        {
            found_index = i;  // Update the index if the name is found
            break;
        }
    }

    // Output the result
    if (found_index != -1)
    {
        printf("The index of %s is %d\n", user_input, found_index);
    }
    else
    {
        printf("Name %s wasn't found.\n", user_input);
    }

    return 0;
}
