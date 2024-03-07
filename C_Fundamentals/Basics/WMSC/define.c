// #define directive is a preprocessor command used to define macros. Macros are fragments
// of code that are given a name. Whenever the name is used in the code, it's replaced
// by the contents of the macro. The #define directive allows you to create CONSTANTS
// and to use symbolic names for literals or expressions, making your code
// more readable and easier to maintain.

#include <stdio.h>

// Defining constants
#define PI 3.14159
#define GREETING "Hello, I am here to explain how macros work in C"

// Defining expressions
#define SQUARE(x) (x * x)
#define CIRCUMFERENCE(radius) (2 * PI * (radius))
#define AREA(radius) (PI * (radius) * (radius))

int main(void)
{
    // Using constants
    printf("%s\n", GREETING);
    printf("PI equal to %f\n", PI);

    // Using expression
    int res = SQUARE(25);
    printf("%i\n", res);

    // Find Area And Circumferennce
    float radius = 1.15;
    printf("Your area is %f\n", AREA(radius));
    printf("Your circumference is %f\n", CIRCUMFERENCE(radius));
    return 0;
}
