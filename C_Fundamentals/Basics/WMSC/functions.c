#include <stdio.h>

// Functions declarations (prototypes)
int add(int x, int y);
int subtract(int x, int y);
double calculateAverage(int arr[], int size);
void PrintHelloWorld();
// Function pointer
int (*operation)(int, int);
int performOperation(int a, int b, int (*operation)(int, int));

int main(void)
{
    // Func 1
    int result = add(10, 20);
    printf("Func 1: Adding: %d\n", result);

    // Func 2
    int array[] = {1, 3, 13, 16};
    int length = sizeof(array) / sizeof(array[0]);
    double average = calculateAverage(array, length);
    printf("Func 2: Average: %.2f\n", average);

    // Func 3
    printf("Func 3: ");
    PrintHelloWorld();

    // Func 4
    operation = subtract;                          // or add()
    int diff = performOperation(10, 5, operation); // diff will be 5
    printf("Func 4: Operation diff: %d\n", diff);
}

// Function definition (Func 1)
int add(int x, int y)
{
    return x + y;
}

// Function with return type (Func 2)
double calculateAverage(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return (double)sum / size;
}

// Void Function (Func 3)
void PrintHelloWorld()
{
    printf("HELLO WORLD!\n");
}

// Function that takes a function pointer as argument (Func 4)
int performOperation(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}

// Func 5
int subtract(int x, int y)
{
    return x - y;
}