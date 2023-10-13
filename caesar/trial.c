#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

bool only_nums(string x);
char rotate(char letter , int key);

int main(int argc, string argv[])
{
    if(argc != 2 || only_nums(argv[1])==false )
    {
         printf("Usage: ./caesar key\n");
        return 1;
    }
    int num = atoi(argv[1]);

    string text = get_string("plaintext:  ");
    printf("ciphertext: ");
    for ( int i = 0 ; i < strlen(text) ; i++)
    {
        if ( isalpha(text[i]) )
        {
            if(isupper(text[i]))
            {
                char final = rotate(text[i], num);
                printf("%c", final);
            }
            else if(islower(text[i]))
            {
                char final2 = rotate(text[i] , num);
                printf("%c" , final2);
            }
        }
        else
        {
            printf("%c" , text[i]);
        }
    }
    printf("\n");



}

bool only_nums(string x)
{
    int length = strlen(x);
    for(int i = 0 ; i < length ; i++ )
    {
    if( ((int) x[i] < '0' ) || ((int) x[i] > '9' ))
    {
        return false;
    }
    }
    return true;
}

char rotate(char letter, int key )
{

    if(isupper(letter))
    {
        letter = (letter-65) ;
        int c =  ((letter + key ) % 26 );
        c = (char) (c+65);
        return c;
            }
    else if(islower(letter))
    {
        letter = (letter-97) ;
        int c =  ((letter + key ) % 26 );
        c = (char) (c+97);
        return c;
    }
    return 1;
}
