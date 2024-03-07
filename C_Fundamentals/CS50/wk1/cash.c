// This program calculates the minimum number of coins required to give a user change.
// It uses a greedy algorithm, prioritizing larger coin denominations first (quarters, dimes, nickels, then pennies).
// The user is prompted to enter the amount of change owed in cents, and the program outputs the minimum coins needed.
#include <cs50.h> // Include please -lcs50
#include <stdio.h>

int main(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    } while (cents < 0);

    int quarters = 25, dimes = 10, nickels = 5, pennies = 1;

    int coins = 0;

    // Handle special case for quarters
    coins += cents / quarters;
    cents %= quarters;

    // Use dimes
    coins += cents / dimes;
    cents %= dimes;

    // Use nickels
    coins += cents / nickels;
    cents %= nickels;

    // Use pennies
    coins += cents;

    printf("%i\n", coins);
}
