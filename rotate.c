#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char rotate(char letter , int key);


int main(void)
{
    string text = get_string("plaintext: ");
    printf("ciphertext:");
    for ( int i = 0 ; i < strlen(text) ; i++)
    {
        if ( isalpha(text[i]) )
        {
            if(isupper(text[i]))
            {
                char final = rotate(text[i], 3);
                printf("%c", final);
                return 1 ;
            }
            else if(islower(text[i]))
            {
                char final2 = rotate(text[i] , 3);
                printf("%c" , final2);
                return 1 ;
            }
        }
        else
        {
            printf("%c" , text[i]);
        }
        printf("\n");
    }

}

char rotate(char letter, int key )
{

    if(isupper(letter))
    {
        letter = (letter/65) ;
        int c =  ((letter + key ) % 26 );
        c = (char) (c+65);
        return c;
            }
    else if(islower(letter))
    {
        letter = (letter/97) ;
        int c =  ((letter + key ) % 26 );
        c = (char) (c+97);
        return c;
    }
    return 1;

}
