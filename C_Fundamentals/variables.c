#include <stdio.h>

int GlobalVar = 1000; // Global variable

int main(void)
{
    // All these variables are local
    int my_num; // Declaration
    my_num = 3; // Initialization

    char my_char = 'A'; // Declaration and Initialization
    float my_pi = 3.14; // Declaration and Initialization

    // Print out all variables
    printf("All variables: %i %c %.2f\n", my_num, my_char, my_pi);

    // Print out global variable
    printf("Global variable: %d\n", GlobalVar);

    // Changing global values
    GlobalVar = 2000;

    // Changing pi values
    my_pi = 4.14;

    // Print out changing variables
    printf("Changed variables: %i %.2f\n", GlobalVar, my_pi);

    // floating point numbers with double precisions
    double my_double = 14.2121212143;
    printf("Double precision: %lf\n", my_double);

    // longer integers
    long my_long = 212142231321;
    printf("Long integer: %ld\n", my_long);
    // short integers
    short my_short = 30;
    printf("Short integer: %d\n", my_short);

    // Store only positive integers increasing the range of non-negative integers
    unsigned int my_unsigned_int = 1000;
    printf("Unsigned integer: %u\n", my_unsigned_int);

    // Arrays
    int numbers[5] = {1, 2, 3, 4, 5}; // 5 integers, each 4 bytes, total 20 bytes
    printf("Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Pointers store memory addresses of other variables.
    int *ptr; // Pointer to an integer, typically 4 or 8 bytes
    printf("Pointer: %p\n", (void *)ptr);

    // Structures allow you to group multiple variables together under a single name.
    struct Person
    {
        char name[20];
        int age;
    } person; // Declaration of person variable

    // Assigning values to struct members
    snprintf(person.name, sizeof(person.name), "John");
    person.age = 25;

    printf("Person: Name: %s, Age: %d\n", person.name, person.age);

    return 0;
}