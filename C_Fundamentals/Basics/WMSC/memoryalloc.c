#include <stdio.h>
#include <stdlib.h>

void StackMemoryAllocation()
{
    // Memory for stack is automatically managed by compiler
    // No memory allocation and deallocation  is needed for stack memory
    // Memory is automatically reclaimed when the function exits
    int localVar; // Allocated on the stack
}

void HeapMemoryAllocation()
{
    // Use <stdlib.h>
    // Functions like malloc, calloc, realloc
    // Heap memory must be explicitly allocated and freed by the programmer
    // It is your responsibility to free memory to avoid memory leaks
    int *dynamicVar = (int*)malloc(sizeof(int)); // allocated on the heap
    free(dynamicVar); // Explicitly free the allocated memory
}

// Static variables have memory allocated at compile time.
// They exist throughout the programm's execution, and their memeory is managed by the system.
static int StaticVar; // Allocated in static memory


int main(void)
{

}