#include <stdio.h>
#include <string.h>

int main(void)
{
    // Integers
    int numbers[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]); // 5
    for (int i = 0; i < length; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Floats
    float values[] = {1.2, 1.222, 2.001};
    int size = sizeof(values) / sizeof(values[0]); // 3
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ", values[i]);
    }
    printf("\n");

    // Strings
    char str[] = "Hello World!";
    int size1 = strlen(str);
    for (int i = 0; i < size1; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");

    // 2D Integer Array
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Array of Pointers(Strings)
    char *names[] = {"Julia", "Vadzim", "Emanuel"};
    int size2 = sizeof(names) / sizeof(names[0]);
    for (int i = 0; i < size2; i++)
    {
        printf("%s ", names[i]);
    }
    printf("\n");

    // Array of Structures
    struct Person
    {
        char name[20];
        int age;
    };

    struct Person people[] = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};
    int size3 = sizeof(people) / sizeof(people[0]);
    for (int i = 0; i < size3; i++)
    {
        printf("Name: %s, Age: %d\n", people[i].name, people[i].age);
    }
}
