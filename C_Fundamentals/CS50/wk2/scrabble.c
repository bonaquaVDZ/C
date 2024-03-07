// This game determines the winner of a short Scrabble-like game
// This program prompt for input twice
// Winner is the player whose score the most points

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char alphabet[27]; // 26 letters plus null terminator

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = 'A' + i;
    }
    alphabet[26] = '\0'; // Null terminate the string
    int numbers[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    char word1[100], word2[100];
    int points1 = 0, points2 = 0;

    // Input Player1
    printf("Player 1: ");
    scanf("%s", word1);

    // Input Player2
    printf("Player 2: ");
    scanf("%s", word2);

    // Calculate points Player1
    for (int i = 0; word1[i] != '\0'; i++)
    {
        char letter = toupper(word1[i]);
        points1 += numbers[letter - 'A']; // It does this by subtracting the ASCII value of 'A' from the ASCII value of the letter,
                                          // which gives an index corresponding to the position of the letter in the alphabet.`
    }

    // Calculate points Player2
    for (int i = 0; word2[i] != '\0'; i++)
    {
        char letter = toupper(word2[i]);
        points2 += numbers[letter - 'A'];
    }

    // Who is the Winner?
    if (points1 > points2)
    {
        printf("Player 1 wins!\n");
    }
    else if (points2 > points1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
    return 0;
}
