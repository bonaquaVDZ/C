#include <stdio.h>

int main(void)
{
    int a = 10, b = 5, c = 13, d = 22;

    if (a == 10 && b != 6)
    {
        printf("%d is equal to 10 and %d is not equal to 6.\n", a, b);
        if (c < d || b > c)
        {
            printf("It is true  nested statement!\n");
        }
    }
    else if (d < c)
    {
        printf("Nope, it is incorrect!\n");
    }
    else
    {
        return 1;
    }
    
    // Ternary Operator
    int number = 10;
    int x = 100;
    
    // Using the ternary operator to determine if a number is even or odd
    char *result = (number % 2 == 0) ? "Even" : "Odd";
    char *res = (x > 333)? "True. 100 is greater or equal to x" : "False. Incorrect";

    // Printing the result
    printf("The number %d is %s.\n", number, result);
    printf("%s\n", res);

    // Switch statement
    int dayOfWeek = 3;  // Assume 1 represents Monday, 2 represents Tuesday, and so on

    switch (dayOfWeek) {
        case 1:
            printf("Today is Monday.\n");
            break;
        case 2:
            printf("Today is Tuesday.\n");
            break;
        case 3:
            printf("Today is Wednesday.\n");
            break;
        case 4:
            printf("Today is Thursday.\n");
            break;
        case 5:
            printf("Today is Friday.\n");
            break;
        case 6:
            printf("Today is Saturday.\n");
            break;
        case 7:
            printf("Today is Sunday.\n");
            break;
        default:
            printf("Invalid day of the week.\n");
            break;
    
    return 0;
    }

}