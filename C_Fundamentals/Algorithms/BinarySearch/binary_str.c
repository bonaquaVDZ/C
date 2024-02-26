// In BINARY SEARCH , the idea of the algorithm is to DIVIDE AND CONQUER, reducing the search area by half each time, trying to find a target number. 
// In order to leverage this power however, our array MUST FIRST BE SORTED, else we cannot make assumptions about the array’s contents.
// O(Log n) Worst-case scenario: We have to divide a list of n elements in half repeatedly to find the target element, either because the target element will be found at the end of the last division or doesn’t exist in the array at all. 
// Ω(1) Best-case scenario: The target element is at the midpoint of the full array, and so we can stop looking immediately after we start.

#include <stdio.h>
#include <string.h>

// Function to perform binary search on a sorted array of strings
int binary_search_strings(char *arr[], int n, const char *target)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int comparison = strcmp(arr[mid], target);

        if (comparison == 0)
        {
            return mid;  // Target found, return the index
        }
        else if (comparison < 0)
        {
            low = mid + 1;  // Search in the right half
        }
        else
        {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Target not found
}

int main(void)
{
    // Sorted array of strings
    char *names[] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank"};

    // Input from user
    char user_input[50];
    printf("Enter a name: ");
    scanf("%s", user_input);

    // Perform binary search
    int index = binary_search_strings(names, sizeof(names) / sizeof(names[0]), user_input);

    // Output the result
    if (index != -1)
    {
        printf("The index of %s is %d\n", user_input, index);
    }
    else
    {
        printf("Name %s wasn't found.\n", user_input);
    }

    return 0;
}
