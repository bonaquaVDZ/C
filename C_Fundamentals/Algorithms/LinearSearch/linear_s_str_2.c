#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main(void)
{
    int string_length;
    printf("Length of the string array: ");
    scanf("%d", &string_length);

    char strings[string_length][MAX_LENGTH]; // Array to store strings
    printf("Enter %d strings.\n", string_length);

    // Input loop
    for (int i = 0; i < string_length; i++)
    {
        printf(">> String %d: ", i + 1);
        scanf("%s", strings[i]); // Read a string and store it in the ith row of the strings array
    }

    // Input the word to search for
    char search_word[MAX_LENGTH];
    printf("Enter the word to search for: ");
    scanf("%s", search_word);

    // Perform linear search
    int found = 0;
    for (int i = 0; i < string_length; i++)
    {
        if (strcmp(strings[i], search_word) == 0)
        {
            printf("Word '%s' found at index %d\n", search_word, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Word '%s' not found in the array\n", search_word);
    }

    return 0;
}
