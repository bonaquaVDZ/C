// This program conducts a plurality vote election where each voter can vote for one candidate.
// After collecting votes, it determines the winner(s) based on who received the most votes.
// If there is a tie, all candidates with the highest number of votes are declared winners.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// Max number of candidates
#define MAX 9

// Define string as an alias for char*
typedef char *string;

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    // Check for invalid number of candidates
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count;
    printf("Number of voters: ");
    scanf("%d", &voter_count);
    getchar(); // Consume the newline character after the integer input

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        char name[50]; // Assuming a name won't exceed 49 characters + null terminator
        printf("Vote: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = 0; // Remove newline character at the end of the string

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(candidates[i].name, name) == 0)
        {
            candidates[i].votes++;
            return true;
        }
    }
    return false;
}

void print_winner(void)
{
    int maxVotes = 0;
    int winnerIndexes[MAX]; // Array to hold the indexes of candidates with max votes
    int winnerCount = 0;    // Counter for the number of winners

    // Find the maximum number of votes
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > maxVotes)
        {
            maxVotes = candidates[i].votes;
            winnerIndexes[0] = i;
            winnerCount = 1;
        }
        else if (candidates[i].votes == maxVotes)
        {
            winnerIndexes[winnerCount] = i;
            winnerCount++;
        }
    }

    // Print the name(s) of the candidate(s) with the maximum votes
    for (int i = 0; i < winnerCount; i++)
    {
        printf("%s\n", candidates[winnerIndexes[i]].name);
    }
}
