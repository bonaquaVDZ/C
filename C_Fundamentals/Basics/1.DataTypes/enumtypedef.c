#include <stdio.h>

// Enumeration for days of the week
enum Days{
    SUNDAY,
    MONDAY,
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY, 
    FRIDAY, 
    SATURDAY
};

// typedef for a custom data type name Color
typedef enum{
    RED, 
    GREEN,
    BLUE
} Color;

int main(void)
{
    // Declaration and initialization of enum variable
    enum Days today = WEDNESDAY; // Enum variable to represent a day of the week

    // Declaration and initialization of typedef enum varible
    Color selectedColor = GREEN; // typedef enum variable representing a color

    // Print values
    printf("Today is day number %d\n", today);


    // Switch statement to handke different cases based on the selectedColor
    switch (selectedColor)
    {
        case RED:
        printf("Selected color: RED\n");
        break;
        case GREEN:
        printf("Selected color: GREEN\n");
        break;
        case BLUE:
        printf("Selected color: BLUE\n");
        break;
        default:
        printf("Default color\n");

    }
}
