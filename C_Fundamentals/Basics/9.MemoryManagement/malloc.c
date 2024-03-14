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
    printf("Dynamically allocated value: %d\n", *ptr);
    
    // Freeing the dynamically allocated memory
    free(ptr);
    printf("Memory deallocation successful\n");
    
    return 0;
}
