#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Объявление указателя
    ptr = &num;  // Присвоение указателю адреса переменной

    printf("Значение переменной: %d\n", num);
    printf("Адрес переменной: %p\n", &num);
    printf("Значение по адресу, хранящемуся в указателе: %d\n", *ptr);

    return 0;
}
