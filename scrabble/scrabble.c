#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int length = strlen(word);
    for( int i =0 ; i< length ; i++)
    {
        if( islower(word[i]))
        {
            return(isupper(word[i]));
        }
        else if( (word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
        {
            return( word[i] = 0);
        }
        else
        {
            return word[i];
        }
    }


    char alpha[26];
    alpha[0] = 'A';
    for ( int j = 1 ; j < 26 ; j++)
    {
        alpha[j] = alpha[j-1] + 1 ;
        return alpha[j];
    }

 for( int m= 0 ; m < 26 ; m++)
 {
    alpha[m] = POINTS[m];
 }
  int sum = 0;
  for ( int n = 0 ; n < length ; n++ )
  {
    sum = sum + POINTS[n];
    return sum;
  }


}
