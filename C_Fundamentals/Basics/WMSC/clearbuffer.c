#include <stdio.h>
#include <string.h>

void clearBuffer(){
    while (getchar() != '\n');
}

int main(void)
{
    // Define variables
    int age;
    int weight;
    char name[50];
    char city[50];

    // Get age from the user
    printf("Please enter your age: ");
    scanf("%d", &age);

    // Clear the input buffer
    clearBuffer();

    // Get weight from the user
    printf("What is your weight: ");
    scanf("%d", &weight);

    // Clear the input buffer
    clearBuffer();

    // Get name from the user
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the trailing newline character from name
    if (name[strlen(name) - 1] == '\n') 
    {
        name[strlen(name) - 1] = '\0';
    }

    // Print a personalized message with user information
    printf("It's a pleasure to know you, %s. You're %d years old, and your weight is %d.\n", name, age, weight);


    return 0;
}
