#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int rem[8];
    string word = get_string(" Message: ");
    int length = strlen(word);
    for( int i = 0 ; i < length ; i++)
    {
        for (int j = 0 ; j < 8 ; j++ )
    {
    rem[7-j]= (int)(word[i] % 2) ;
    word[i] = word[i] / 2 ;
    }
    for ( int j = 0 ; j < 8 ; j++)
    {
    printf("%i" , rem[j]);
    }
    printf("\n");

    }
}