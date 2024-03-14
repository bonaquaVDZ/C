#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamic memory allocation using malloc
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Assigning a value to the dynamically allocated memory
    *ptr = 42;
    printf("Initial dynamically allocated value: %d\n", *ptr);
    
    // Dynamic memory reallocation using realloc
    ptr = (int *)realloc(ptr, 2 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    // Assigning values to the resized dynamically allocated memory
    *(ptr + 1) = 84;
    printf("Resized dynamically allocated values: %d, %d\n", *ptr, *(ptr + 1));
    
    // Freeing the dynamically allocated memory
    free(ptr);
    printf("Memory deallocation successful\n");
    
    return 0;
}
