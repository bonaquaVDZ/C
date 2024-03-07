#include <stdio.h>
#include <string.h>
#include <stdlib.h> // include malloc and free

// Using nested structs
typedef struct
{
    int day;
    int month;
    int year;
} Date;

// Define the Student struct
typedef struct
{
    char first_name[30];
    char last_name[30];
    int age;
    Date birthday;
} Student;

// Prototype function
void PrintStudentsDetails(Student p);
void PrintStudentDetailsPointer(const Student *p);

int main(void)
{
    // Initialize the Student1
    Student student1;

    // Assigning values for Student1
    strcpy(student1.first_name, "Vadzim");
    strcpy(student1.last_name, "Ramaniuk");
    student1.age = 29;
    student1.birthday.day = 6;
    student1.birthday.month = 10;
    student1.birthday.year = 1994;

    // PrintStudentDetailsPointer(&student1);

    // PrintStudentsDetails(student1);

    // Initialize the Student2 + directly assigning values
    Student student2 = {"Julia", "Kravchuk", 26};

    Student students[2] = {student1, student2};

    for (int i = 0; i < 2; i++)
    {
        PrintStudentDetailsPointer(&students[i]);
    }

    // PrintStudentDetailsPointer(&student2);

    // PrintStudentsDetails(student2);

    // Dynamic memory allocation
    Student *student3 = (Student *)malloc(sizeof(Student));
    strcpy(student3->first_name, "John");
    strcpy(student3->last_name, "Doe");
    student3->age = 22;
    student3->birthday.day = 30;
    student3->birthday.month = 5;
    student3->birthday.year = 1983;

    PrintStudentDetailsPointer(student3);
    free(student3); // Always free dynamically allocated memory

    return 0;
}

void PrintStudentsDetails(Student p)
{
    printf(" First name: %s\n Last name: %s\n Age: %d\n", p.first_name, p.last_name, p.age);
}

// Passing structs to functions can be costly in terms of memory and performance,
// especially for large structs. Using pointers to structs instead can make your program more efficient.
void PrintStudentDetailsPointer(const Student *p)
{
    printf(" First name: %s\n Last name: %s\n Age: %d\n Birthday Date: %d.%d.%d\n\n", p->first_name, p->last_name, p->age, p->birthday.day, p->birthday.month, p->birthday.year);
}