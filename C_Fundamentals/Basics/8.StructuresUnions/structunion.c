#include <stdio.h>
#include <string.h>

// 1. Defining and Using Structure
struct Person 
{
    char name[50];
    int age;
    float salary;
};

// 2. Nested structures
struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    char name[50];
    struct Date birthdate;
    float salary;
};

// 3. Diff between structures and unions
struct Point
{
    int x;
    int y;
};

union Status
{
    int code;
    char message[100];
};

int main(void)
{
    // 1. Defining and using structures
    struct Person employee;
    strcpy(employee.name, "Vadzim");
    employee.age = 29;
    employee.salary = 60000;

    printf("Employee name: %s\n", employee.name);
    printf("Employee age: %i\n", employee.age);
    printf("Employee salary: %.2f\n", employee.salary);

    // 2. Nested structures
    struct Employee emp;
    strcpy(emp.name, "Julia");
    emp.birthdate.day = 19;
    emp.birthdate.month = 1;
    emp.birthdate.year = 1998;
    emp.salary = 60000;

    printf("Employee name: %s\n", emp.name);
    printf("Employee birthdate: %i%i%i\n", emp.birthdate.year, emp.birthdate.month, emp.birthdate.day);
    printf("Employee salary: %.2f\n", emp.salary);

    // 3. Difference between Structures and Unions
    struct Point point;
    point.x = 10;
    point.y = 20;

    union Status status;
    status.code = 200;
    strcpy(status.message, "Success");

    printf("\nPoint coordinates: (%d, %d)\n", point.x, point.y);
    printf("Status code: %d\n", status.code);
    printf("Status message: %s\n", status.message);




}