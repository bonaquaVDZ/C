#include <stdio.h>

int main(void)
{
    int my_input;
    printf("Input: ");
    scanf("%i", &my_input);

    // Clear input buffer
    while (getchar() != '\n')
        ;

    char my_text[1000];
    printf("Your text: ");
    fgets(my_text, sizeof(my_text), stdin);

    printf("You enetered:  %s", my_text);
    return 0;
}