#include <stdio.h>

int main() {
    // Declaration and initialization of an integer array
    int integerArray[5] = {1, 2, 3, 4, 5};

    // Declaration and initialization of a character array (string)
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // '\0' denotes the null character

    // Printing the values of the integer array
    printf("Integer Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", integerArray[i]);
    }
    printf("\n");

    // Printing the values of the character array (string)
    printf("String: %s\n", greeting);

    return 0;
}
