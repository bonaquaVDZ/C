// Programm calculates the approximate grade level needed to comprehend some text.
// Longer words correlate with higher reading levels.
// Longer sentences correlate with higher reading levels.
// Coleman-Liau Index - readability test
// Formula: index = 0.0588 * L - 0.296 * S - 15.8
// L - average number of letters per 100 words
// S - average number of sentences per 100 words
// RUN code with: gcc -o program_name source_file.c -lm

#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    char text[10000];
    printf("Your text: ");
    // scanf("%9999[^\n]", text); // Read up to 9999 characters until newline

    fgets(text, sizeof(text), stdin); // Read text from user inpu
                                      // sizeof -calculate the size of the text array in bytes

    int letters = 0;
    int sentences = 0;
    int words = 0;

    // Counting letters, words, and sentences
    for (int i = 0; text[i] != '\0'; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
        else if (text[i] == ' ')
        {
            words++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    // Increment word count for the last word
    words++;

    // Calculate the average number of letters and sentences per 100 words
    float L = ((float)letters / words) * 100;
    float S = ((float)sentences / words) * 100;

    // Calculate the Coleman-Liau index
    float index = 0.0588 * L - 0.296 * S - 15.8;

    // Round index to the nearest integer
    int grade = round(index);

    // Output the grade level
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

    return 0;
}
