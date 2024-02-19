#include <stdio.h>

int main(void) {
    char operation;
    double num1, num2, result;
    int exitChoice = 0;
    

    do {
        // Get input from the user
        while (1) {
            printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
            scanf(" %c", &operation);

            if (operation == 'q') {
                exitChoice = 1;
                break;
            }

            if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
                break;
            } else {
                printf("Invalid operator. Please try again.\n");
            }
        }

        if (exitChoice) {
            break;  // Exit the loop if the user chose to quit
        }

        printf("First number: ");
        scanf("%lf", &num1);

        printf("Second number: ");
        scanf("%lf", &num2);

        // Perform the calculation based on the operator
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                    return 1;  // Exit with an error code
                }
                break;
            default:
                printf("Error! Invalid operator.\n");
                return 1;  // Exit with an error code
        }

        // Display the result
        printf("Result: %.2lf\n", result);

        // Ask if the user wants to perform another calculation
        printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &exitChoice);

    } while (exitChoice);
    printf("Calculator closed. Goodbye!\n");

    return 0;

}
