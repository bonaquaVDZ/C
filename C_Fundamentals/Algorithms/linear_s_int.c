#include <stdio.h>

int main(void)
{
    // Number of arrays
    int numbers[] = {1, 3, 10, 20, 14, 22};

    // Input from user
    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Find the index of the number
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        if (numbers[i] == user_input)
        {
            printf("The index of %d is %d\n", user_input, i);
            break;
        }
    }
    printf("Number %d wasn't found.\n", user_input);
}