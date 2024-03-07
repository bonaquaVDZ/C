#include <stdio.h>

int main(void)
{
    
    // Basic While Loop
    int x = 0;
    while (x <= 3)
    {
        printf("%i ", x);
        x++;
    }
    printf("\n");

    // Basic For loop (initialization / condition / increment)
    for (int i = 3; i < 8; i++)
    {
        printf("%i ", i);
    }
    printf("\n");

    // Nested loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Pair: %i %i ",i, j);
        }
    }
    printf("\n");
    
    // Code is executed at least once, even if the condition is false. 
    int input;
    do
    {
        printf("Provide positive integer: ");
        scanf("%d", &input);
    } while (input <= 0);



}