// In BINARY SEARCH , the idea of the algorithm is to DIVIDE AND CONQUER, reducing the search area by half each time, trying to find a target number. 
// In order to leverage this power however, our array MUST FIRST BE SORTED, else we cannot make assumptions about the array’s contents.
// O(Log n) Worst-case scenario: We have to divide a list of n elements in half repeatedly to find the target element, either because the target element will be found at the end of the last division or doesn’t exist in the array at all. 
// Ω(1) Best-case scenario: The target element is at the midpoint of the full array, and so we can stop looking immediately after we start.

#include <stdio.h>

// Function to perform binary search on a sorted array
int binary_search(int arr[], int n, int target)
{
    // Initialize the low and high indices for the search
    int low = 0;
    int high = n - 1;

    // Continue the search until the low index is less than or equal to the high index
    while (low <= high)
    {
        // Calculate the middle index of the current search space
        int mid = (low + high) / 2;

        // Check if the middle element is equal to the target
        if (arr[mid] == target)
        {
            // Target found, return the index
            return mid;
        }
        else if (arr[mid] < target)
        {
            // If the target is greater than the middle element, search in the right half
            low = mid + 1;
        }
        else
        {
            // If the target is less than the middle element, search in the left half
            high = mid - 1;
        }
    }

    // If the loop exits, the target is not found in the array
    return -1;
}

int main(void)
{
    // Sorted array of numbers
    int numbers[] = {1, 3, 10, 14, 20, 22};

    // Input from user
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Perform binary search
    int index = binary_search(numbers, sizeof(numbers) / sizeof(numbers[0]), user_input);

    // Output the result
    if (index != -1)
    {
        printf("The index of %d is %d\n", user_input, index);
    }
    else
    {
        printf("Number %d wasn't found.\n", user_input);
    }

    return 0;
}
