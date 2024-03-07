#include <stdio.h>

int main() {
    // Declaration (no initialization) of an integer variable
    int integerVariable;  // Store whole numbers (positive, negative, or zero)

    // Declaration and initialization of a short integer variable
    short shortIntegerVariable = 32767;  // Store smaller range of whole numbers (-32768 to 32767)

    // Declaration and initialization of a long integer variable
    long longIntegerVariable = 2147483647;  // Store larger range of whole numbers (-2147483648 to 2147483647)

    // Declaration and initialization of an unsigned integer variable
    unsigned int unsignedIntegerVariable = 4294967295;  // Store non-negative whole numbers only (0 to 4294967295)

    // Declaration and initialization of a signed character variable
    signed char signedCharVariable = -128;  // Store a single character with sign (-128 to 127)

    // Declaration and initialization of an unsigned character variable
    unsigned char unsignedCharVariable = 255;  // Store a single character without sign (0 to 255)

    // Print values using printf
    printf("Integer: %d\n", integerVariable);                  // Note: The value of uninitialized variable is undefined
    printf("Short Integer: %hd\n", shortIntegerVariable);      // %hd is used for priting short integers
    printf("Long Integer: %ld\n", longIntegerVariable);        // %ld is used for printing long integers
    printf("Unsigned Integer: %u\n", unsignedIntegerVariable); // %u is used for printing unsigned integers
    printf("Signed Char: %c\n", signedCharVariable);           // %c is used for printing characters
    printf("Unsigned Char: %c\n", unsignedCharVariable);       // %c is used for printing characters 

    return 0;
}

