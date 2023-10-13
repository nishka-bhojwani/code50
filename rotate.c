#include <cs50.h>
#include <stdio.h>
#include <string.h>

char rotate(char letter);
int key;

int main(void)
{
    string text = get_string("plaintext: \n");
    printf("ciphertext:");
    for ( int i = 0 ; i < strlen(text) ; i++)
    {
        if ( isalpha(text[i]) )
        {
            if(isupper(text[i]))
            {
                char final = rotate(text[i]);
                printf("%c", final);
            }
            else if(islower(text[i]))
            {
                char final2 = rotate(text[i]);
                printf("%c" , final2);
            }
        }
        else
        {
            printf("%c" , text[i]);
        }
    }

}

char rotate(char letter)
{

    if(isupper(letter))
    {
        letter = (letter/65) ;
        int c =  ((letter + key ) % 26 )
        char c = (char) (c1+65)
        return c;
            }
    else if(islower(letter))
    {
        letter = (letter/97) ;
        int c =  ((letter + key ) % 26 )
        char c = (char) (c1+97)
        return c;
    }
    return 0;
}
