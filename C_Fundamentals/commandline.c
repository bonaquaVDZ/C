#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if (argc < 3) 
    {
        printf("Usage: %s <argument> <argument>\n", argv[0]);
        return 1;  // Exit with an error code
    }
    else if (argc == 4 && strcmp(argv[3], "-f")==0)
    {
        printf("Here is a basic manual of how you can use this library.\n");
        printf("Please make sure to use <string.h> library if you want to compare two strings.\n");
        printf("strcmp() is a useful function to check similarity or dissimilarity between two strings.\n");
        printf("Like strcmp(argv[4], \"-f\")==0 -> This code snippet compare if arguments is the same as -f .\n");
        printf("-------------------------------------------------------------------------------------------\n");
    }

    // Command-line arguments are passed as strings. If you need them as numbers, you can convert them with functions like atoi() and atof()
    int argv1 = atoi(argv[1]); // for integers
    float argv2 = atof(argv[2]); // for floating-point numbers

    printf("%d %.2f\n", argv1, argv2);
}