#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // String Manipulation Functions
    char str1[20] = "Hello";
    char str2[20] = " World";

    // String Length
    int length = strlen(str1);
    printf("Length of str1: %d\n", length);

    // String Copy
    char dest[20];
    strcpy(dest, str1);
    printf("Copied String: %s\n", dest);

    // String Concatenation
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);

    // String Comparison
    // If str1 and dest are identical, result will be 0, and the output will be "Comparison Result: 0". 
    // If they are not identical, the output will indicate whether str1 is lexicographically less than or greater than dest.
    int result = strcmp(str1, dest);
    printf("Comparison Result: %d\n", result);

    // Substring Search
    char* substring = strstr(str1, "World");
    printf("Substring: %s\n", substring);

    // Character Search
    char* charPos = strchr(str1, 'o');
    printf("First 'o' at position: %ld\n", charPos - str1 + 1);

    charPos = strrchr(str1, 'o');
    printf("Last 'o' at position: %ld\n", charPos - str1 + 1);

    // Arrays
    int numbers[] = {1, 2, 3, 4, 5};
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};

    // Accessing Elements
    printf("First number: %d\n", numbers[0]);
    printf("Second vowel: %c\n", vowels[1]);

    // Dynamic Arrays
    int *dynamicArray = (int *)malloc(5 * sizeof(int));
    dynamicArray[0] = 10;
    dynamicArray[1] = 20;
    printf("Dynamic Array: %d, %d\n", dynamicArray[0], dynamicArray[1]);
    free(dynamicArray);

    // Array of Pointers
    char* words[] = {"Apple", "Banana", "Cherry"};
    printf("Second word: %s\n", words[1]);

    // Multidimensional Arrays
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Matrix Element (2,2): %d\n", matrix[2][2]);

    return 0;
}
