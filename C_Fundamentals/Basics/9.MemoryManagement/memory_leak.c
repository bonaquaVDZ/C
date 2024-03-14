#include <stdio.h>
#include <stdlib.h>

int main() {
    // Memory leak example (uncomment to simulate)
    int *leaked_ptr = (int *)malloc(sizeof(int));
    if (leaked_ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    *leaked_ptr = 123;
    printf("Leaked value: %d\n", *leaked_ptr);
    
    // Uncomment the below line to intentionally leak memory
    // int *leaked_ptr2 = (int *)malloc(sizeof(int));
    
    // Freeing the dynamically allocated memory (commented out for demonstration)
    // free(leaked_ptr);
    
    return 0;
}
