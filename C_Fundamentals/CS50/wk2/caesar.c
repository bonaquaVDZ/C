// Caesar is an encryption method of shifting each letter therein by some numbers of places.
// Unencrypted text -> plaintext
// Encrypted text -> ciphertext
// Key -> secret shift

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

// Function prototype declarations
int only_digits(
    char *str); // '*' str is a pointer variable. Pointer is a variable that stores the memory address of another variable.
char rotate(char ch, int key);

int main(int argc, char *argv[])
{
    // Counting command-line arguments
    if (argc != 2 || !only_digits(argv[1])) // '!' - logical NOT operator
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert the key to an integer
    int key = atoi(argv[1]); // ASCII to integer / Part of stdlib.h

    // Get plaintext from user
    printf("plaintext: ");
    char plaintext[1000];
    fgets(plaintext, sizeof(plaintext), stdin);

    // Output ciphertext
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\0'; i++)
    {
        printf("%c", rotate(plaintext[i], key));
    }

    return 0;
}

// Function to check if a string contains only digits
int only_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!isdigit(str[i]))
        {
            return 0; // False if any non-digit character is found
        }
    }
    return 1; // True if all characters are digits
}

// Function to rotate a character by a given number of positions
char rotate(char ch, int key)
{
    if (isalpha(ch))
    {
        char base = isupper(ch) ? 'A' : 'a';
        return (ch - base + key) % 26 + base;
    }
    else
    {
        return ch;
    }
}
