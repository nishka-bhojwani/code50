#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[] = get_string(" Message: ");
    int length = strlen(word);
    for( int i = 0 ; i < length ; i++)
    {
        for (int j = 0 ; j < 8 ; i++ )
    {
    rem[7-i]= (int)(word[i] % 2) ;
    word[i] = word[i] / 2 ;
    }
    for ( int j = 0 ; j < 8 ; j++)
    {
    printf("%i" , rem[j]);
    }

    }
    int num = 72;
    int rem[8];


    for (int j = 0 ; j < 8 ; i++ )
    {
    rem[7-i]= (int)(word[i] % 2) ;
    word[i] = word[i] / 2 ;
    }
    for ( int j = 0 ; j < 8 ; j++)
    {
    printf("%i" , rem[j]);
    }


}