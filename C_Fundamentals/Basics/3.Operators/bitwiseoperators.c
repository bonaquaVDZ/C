#include <stdio.h>

int main() {
    // Bitwise operators
    unsigned int a = 5;  // Binary representation: 0101
    unsigned int b = 3;  // Binary representation: 0011

    // Bitwise AND (&)
    unsigned int result_and = a & b;  // Binary representation: 0001
    printf("Bitwise AND: %u\n", result_and);

    // Bitwise OR (|)
    unsigned int result_or = a | b;  // Binary representation: 0111
    printf("Bitwise OR: %u\n", result_or);

    // Bitwise XOR (^)
    unsigned int result_xor = a ^ b;  // Binary representation: 0110
    printf("Bitwise XOR: %u\n", result_xor);

    // Bitwise NOT (~)
    unsigned int result_not_a = ~a;  // Binary representation: 11111111111111111111111111111010 (32-bit representation)
    printf("Bitwise NOT for a: %u\n", result_not_a);

    // Left shift (<<)
    unsigned int result_left_shift = a << 2;  // Binary representation after left shift by 2: 10100
    printf("Left shift by 2: %u\n", result_left_shift);

    // Right shift (>>)
    unsigned int result_right_shift = a >> 1;  // Binary representation after right shift by 1: 0010
    printf("Right shift by 1: %u\n", result_right_shift);

    return 0;
}
