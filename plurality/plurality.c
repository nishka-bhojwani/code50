#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count = 0;

// Function prototypes
bool vote(string name , int n);
void print_winner(int n);

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

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name,candidate_count))
        {
            printf("Invalid vote.\n");
            return 1;
        }
    }

    // Display winner of election
    print_winner(candidate_count);
}

// Update vote totals given a new vote
bool vote(string name , int n)  //comparing the inputs to candidates names if its the same incrememting that candidates vote count by 1
{
    // TODO
    for (int i = 0 ; i < n ; i++ )
    {
    if(strcmp(name,candidates[i].name)==0)
    {
        candidates[i].votes++;
        return true;
    }
    }
     return false;
}

// Print the winner (or winners) of the election
void print_winner(int n)
{
    // TODO
     int max_votes = 0; //inializing maximum votes to zero

    for (int i = 0; i < n; i++) //if votes of candidates are more than maximum votes the max votes become that candidates votes
    {
        if (candidates[i].votes > max_votes)
        {
            max_votes = candidates[i].votes;
        }
    }

    for (int i = 0; i < n; i++) //print the candidate with maximum number of votes
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }

    return;
}
